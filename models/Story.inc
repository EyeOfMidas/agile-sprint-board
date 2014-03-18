<?php
class Story {
	private $id;
	private $text;
	private $details;
	private $columnId;
	private $estimateId;
	private $sort;

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
		$this->sort = $result[0]['sort'];
	}

	public function populate(array $storyData) {
		$this->id = (isset($storyData['story_id']) ? $storyData['story_id'] : $this->id);
		$this->text = (isset($storyData['text']) ? $storyData['text'] : $this->text);
		$this->details = (isset($storyData['details']) ? $storyData['details'] : $this->details);
		$this->columnId = (isset($storyData['column_id']) ? $storyData['column_id'] : $this->columnId);
		$this->estimateId = (isset($storyData['estimate_id']) ? $storyData['estimate_id'] : $this->estimateId);
		$this->sort = (isset($storyData['sort']) ? $storyData['sort'] : $this->sort);
	}

	public function toArray() {
		return array(
			"story_id" => $this->id,
			"text" => $this->text,
			"details" => $this->details,
			"column_id" => $this->columnId,
			"estimate_id" => $this->estimateId,
			"sort" => $this->sort
		);
	}

	public function create() {
		$sql = sprintf("INSERT INTO story (text, details, column_id, estimate_id, sort) VALUES ('%s', '%s', '%s', '%s', '%s')", $this->text, $this->details, $this->columnId, $this->estimateId, $this->sort);
		$database = new Database();
		$insertId = $database->write($sql);
		$this->id = $insertId;
	}

	public function update() {
		if ($this->id) {
			$sql = sprintf("UPDATE story SET text='%s', details='%s', column_id='%s', estimate_id='%s', sort='%s' WHERE story_id = '%s'", $this->text, $this->details, $this->columnId, $this->estimateId, $this->sort, $this->id);
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

	public function getColumnId() {
		return $this->columnId;
	}

	public function setColumnId($columnId) {
		$this->columnId = $columnId;
	}

	public function getSort() {
		return $this->sort;
	}

	public function setSort($sort) {
		$this->sort = $sort;
	}
}