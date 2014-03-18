<?php
class Board {
	private $columns;
	private $stories;
	private $estimates;

	public function __construct() {
		$this->stories = array();
	}

	public function load() {
		$sql = "SELECT * FROM `column` ORDER BY sort ASC";
		$database = new Database();
		$columnsData = $database->query($sql);
		foreach ($columnsData as $data) {
			$currentColumn = new Column($this);
			$sql = sprintf("SELECT * FROM story WHERE column_id = '%s' ORDER BY sort ASC", $data['column_id']);
			$stories = $database->query($sql);
			$columnStories = array();
			foreach ($stories as $story) {
				$currentStory = new Story($this);
				$currentStory->populate($story);
				$columnStories[] = $currentStory;
			}
			$this->stories = array_merge($this->stories, $columnStories);
			$currentColumn->populate($data);
			$currentColumn->populateStories($columnStories);
			$this->columns[] = $currentColumn;
		}
		
		$sql = "SELECT * FROM estimate_levels ORDER BY sort ASC";
		$result = $database->query($sql);
		foreach ($result as $estimate) {
			$currentEstimate = new Estimate();
			$currentEstimate->populate($estimate);
			$this->estimates[] = $currentEstimate;
		}
	}

	public function getColumns() {
		return $this->columns;
	}

	public function getEstimates() {
		return $this->estimates;
	}

	public function getEstimateById($estimateId) {
		foreach ($this->estimates as $estimate) {
			if ($estimate->getId() == $estimateId) {
				return $estimate->getDisplay();
			}
		}
	}

	public function getStoryById($storyId) {
		foreach ($this->stories as $story) {
			if ($story->getId() == $storyId) {
				return $story;
			}
		}
	}
}