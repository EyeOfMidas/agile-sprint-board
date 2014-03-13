<?php

class Story {

	private $id;

	private $text;

	private $description;

	private $estimate;

	public function __construct() {}

	public function load($id) {
		// TODO: sql query to load this object
	}

	public function populate(array $storyData) {
		$this->id = $storyData['id'];
		$this->text = $storyData['text'];
		$this->description = $storyData['description'];
		$this->estimate = $storyData['estimate'];
	}

	public function toArray() {
		return array(
			"id" => $this->id,
			"text" => $this->text,
			"description" => $this->description,
			"estimate" => $this->estimate
		);
	}

	public function create() {
		$sql = sprintf("INSERT INTO story (story_id, text, description, estimate)
			VALUES ('%s', '%s', '%s', '%s')", $this->text, $this->description, $this->estimate);
		
		// TODO: write to DB
	}

	public function update() {
		if ($this->id) {
			$sql = sprintf("UPDATE story text='%s', description='%s', estimate='%s' WHERE story_id = '%s'", $this->text, $this->description, $this->estimate, $this->id);
			// TODO: write to DB
		}
	}
}