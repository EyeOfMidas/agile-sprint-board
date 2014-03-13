<?php

class Form {

	public function get($index) {
		if (isset($_GET[$index])) {
			return $_GET[$index];
		}
	}
}