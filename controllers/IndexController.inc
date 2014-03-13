<?php

class IndexController implements IController{

	public function execute(Form $form) {
		$view = new View();
		$viewData = array();
		return $view->render('indexView.inc', $viewData);
	}
}