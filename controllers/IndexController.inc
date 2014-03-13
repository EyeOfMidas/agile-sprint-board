<?php

class IndexController implements IController{

	public function execute(Form $form) {
		$view = new View();
		
		$columns = array();
		
		$viewData = array();
		return $view->render('indexView.inc', $viewData);
	}
}