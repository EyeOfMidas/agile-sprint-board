<?php
class StorySaveController implements IController {
	public function execute(Form $form) {
		
		//TODO: save data
		
		$header = new Header();
		$header->redirect('/');
	}
}