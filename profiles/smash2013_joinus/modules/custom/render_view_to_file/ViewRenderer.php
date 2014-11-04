<?php

class ViewRenderer {

	protected $view = NULL;
	protected $display_id = 'default';

	public function __construct($view_name, $display_id = 'default') {
		$this->view = views_get_view($view_name);
		$this->display_id = $display_id;
		$this->view->set_display($this->display_id);
	}

	public function arguments($arguments = array()) {
		if (!empty($arguments)) {
			$this->view->set_arguments($arguments);
		}
	}

	public function exposedInput($exposed_input = array()) {
		if (!empty($exposed_input)) {
			$this->view->set_exposed_input($exposed_input);
		}
	}

	public function offset($offset = 0) {
		if (!empty($offset)) {
			$this->view->set_offset(intval($offset));
		}
	}

	public function render($filename) {
		$this->view->build();
  		$output = $this->view->render($this->display_id);
  		return file_save_data($output, $filename);
	}

}
