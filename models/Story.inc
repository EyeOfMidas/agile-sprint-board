<?php

class Story {

	private $id;

	private $text;

	private $details;

	private $estimateId;

	public function __construct(Board $board) {
		$this->board = $board;
	}

	public function load($id) {
		// TODO: sql query to load this object
		$sql = sprintf("SELECT * FROM story WHERE story_id = '%s' LIMIT 1", $id);
		$database = new Database();
		$result = $database->query($sql);
		$this->id = $result[0]['story_id'];
		$this->text = $result[0]['text'];
		$this->details = $result[0]['details'];
		$this->estimateId = $result[0]['estimate_id'];
	}

	public function populate(array $storyData) {
		$this->id = $storyData['story_id'];
		$this->text = $storyData['text'];
		$this->details = $storyData['details'];
		$this->estimateId = $storyData['estimate_id'];
	}

	public function toArray() {
		return array(
			"story_id" => $this->id,
			"text" => $this->text,
			"details" => $this->details,
			"estimate_id" => $this->estimateId
		);
	}

	public function create() {
// 		$sql = sprintf("INSERT INTO story (story_id, text, details, estimate)
// 			VALUES ('%s', '%s', '%s', '%s')", $this->text, $this->details, $this->estimate);
		
		// TODO: write to DB
	}

	public function update() {
		var_dump($this->estimateId);
		die();
		if ($this->id) {
// 			$sql = sprintf("UPDATE story text='%s', details='%s', estimate='%s' WHERE story_id = '%s'", $this->text, $this->details, $this->estimate, $this->id);
			// TODO: write to DB
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
}