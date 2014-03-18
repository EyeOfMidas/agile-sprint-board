<?php
class Story {
	private $id;
	private $text;
	private $details;
	private $columnId;
	private $estimateId;

	public function __construct(Board $board) {
		$this->board = $board;
	}

	public function load($id) {
		$sql = sprintf("SELECT * FROM story WHERE story_id = '%s' LIMIT 1", $id);
		$database = new Database();
		$result = $database->query($sql);
		$this->id = $result[0]['story_id'];
		$this->text = $result[0]['text'];
		$this->details = $result[0]['details'];
		$this->columnId = $result[0]['column_id'];
		$this->estimateId = $result[0]['estimate_id'];
	}

	public function populate(array $storyData) {
		$this->id = $storyData['story_id'];
		$this->text = $storyData['text'];
		$this->details = $storyData['details'];
		$this->columnId = $storyData['column_id'];
		$this->estimateId = $storyData['estimate_id'];
	}

	public function toArray() {
		return array(
			"story_id" => $this->id,
			"text" => $this->text,
			"details" => $this->details,
			"column_id" => $this->columnId,
			"estimate_id" => $this->estimateId
		);
	}

	public function create() {
		$sql = sprintf("INSERT INTO story (text, details, column_id, estimate_id) VALUES ('%s', '%s', '%s', '%s')",
			$this->text, $this->details, $this->columnId, $this->estimateId);
		$database = new Database();
		$insertId = $database->write($sql);
		$this->id = $insertId;
	}

	public function update() {
		if ($this->id) {
			$sql = sprintf("UPDATE story SET text='%s', details='%s', column_id='%s', estimate_id='%s' WHERE story_id = '%s'",
				$this->text, $this->details, $this->columnId, $this->estimateId, $this->id);
			$database = new Database();
			$database->write($sql);
		}
	}

	public function getId() {
		return $this->id;
	}

	public function getText() {
		return $this->text;
	}

	public function getDetails() {
		return $this->details;
	}

	public function getEstimateId() {
		return $this->estimateId;
	}

	public function getEstimate() {
		return $this->board->getEstimateById($this->estimateId);
	}
	
	public function setColumnId($columnId) {
		$this->columnId = $columnId;
	}
}