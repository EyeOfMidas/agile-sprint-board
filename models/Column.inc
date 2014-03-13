<?php
class Column {
	private $columnName;
	private $displayName;
	private $stories;
	public function __construct() {
		
	}
	
	public function load($columnId) {
		
	}
	
	public function populate(array $columnData) {
		$this->columnName = $columnData['name'];
		$this->displayName = $columnData['displayName'];
		foreach($columnData['stories'] as $story) {
			$curStory = new Story();
			$this->stories[] = $curStory->populate($story);
		}
	}
}