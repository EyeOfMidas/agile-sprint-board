<?php

class StringBuilder {

	private $string;

	public function append($string) {
		$this->string .= $string;
	}
}