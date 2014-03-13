<?php

class IndexController {

	public function execute(Form $form) {
		$view = new View();
		$viewData = array();
		return $view->render('indexView.inc', $viewData);
	}
}