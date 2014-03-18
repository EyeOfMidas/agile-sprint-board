<?php
class Estimate {
	private $id;
	private $value;
	private $display;

	public function __construct() {}

	public function populate($data) {
		$this->id = $data['estimate_id'];
		$this->value = $data['sort'];
		$this->display = $data['display_value'];
	}
	
	public function getId() {
		return $this->id;
	}
	
	public function getDisplay() {
		return $this->display;
	}
}