<?php
class Column {
	private $columnName;
	private $displayName;
	private $stories;

	public function __construct(Board $board) {
		$this->columnName = "";
		$this->displayName = "";
		$this->stories = array();
		$this->board = $board;
	}

	public function load($columnId) {
		$sql = sprintf("SELECT * FROM column WHERE column_id = '%s' LIMIT 1", $columnId);
		$database = new Database();
		$result = $database->query($sql);
	}

	public function populate(array $columnData) {
		$this->columnName = $columnData['name'];
		$this->displayName = $columnData['display_name'];
	}

	public function populateStories(array $stories) {
		$this->stories = $stories;
	}

	public function getName() {
		return $this->columnName;
	}

	public function getDisplayName() {
		return $this->displayName;
	}

	public function getStories() {
		return $this->stories;
	}
}