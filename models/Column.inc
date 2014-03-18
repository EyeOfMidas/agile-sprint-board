<?php
class Column {
	private $name;
	private $displayName;
	private $stories;

	public function __construct(Board $board) {
		$this->name = "";
		$this->displayName = "";
		$this->stories = array();
		$this->board = $board;
	}

	public function load($columnId) {
		$sql = sprintf("SELECT * FROM column WHERE column_id = '%s' LIMIT 1", $columnId);
		$database = new Database();
		$result = $database->query($sql);
		$this->id = $result[0]['column_id'];
	}

	public function populate(array $columnData) {
		$this->id = $columnData['column_id'];
		$this->name = $columnData['name'];
		$this->displayName = $columnData['display_name'];
	}

	public function populateStories(array $stories) {
		$this->stories = $stories;
	}
	
	public function getId() {
		return $this->id;
	}

	public function getName() {
		return $this->name;
	}

	public function getDisplayName() {
		return $this->displayName;
	}

	public function getStories() {
		return $this->stories;
	}
}