<?php
class Header {
	public function redirect($url) {
		header('Location: ' . $url);
	}
}