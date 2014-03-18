<?php
class IndexController implements IController {

	public function execute(Form $form) {
		$view = new View();
		$board = new Board();
		$board->load();
		
		$viewData = array(
			"board" => $board
		);
		return $view->render('indexView.inc', $viewData);
	}
}