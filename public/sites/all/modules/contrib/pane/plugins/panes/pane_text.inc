<?php
class pane_text extends pane_base {
  /**
   * Provides the dataedit form
   *
   * @see pane_base::data_edit_form()
   *
   * @return array
   */
  public function data_edit_form($form = array(), &$form_state = array()) {
    $form['description'] = array(
      '#type' => 'text_format',
      '#title' => t('Description'),
      '#default_value' => (TRUE === isset($this->data['value'])) ? $this->data['value'] : '',
      '#format' => (TRUE === isset($this->data['format'])) ? $this->data['format'] : filter_default_format(),
    );

    $form_state['input']['description'] = $this->data;

    return $form;
  }

  /**
   * Validates the form data
   *
   * @see pane_base::data_edit_form_validate()
   */
  public function data_edit_form_validate(&$form, &$form_state) {
    // Do nothing
  }

  /**
   * Saves the form data
   *
   * @see pane_base::data_edit_form_submit()
   */
  public function data_edit_form_submit(&$form, &$form_state) {
    $this->data = $form_state['values']['description'];
    $this->title = $form_state['values']['title'];
  }

  /**
   * Renders the pane text
   *
   * @see pane_base::render()
   *
   * @return string
   */
  public function render() {
    $text = '';

    if (TRUE === isset($this->data['value'])) {
      $text = check_markup($this->data['value'], $this->data['format']);
    }

    return $text;
  }

  public function container_edit_form(&$form_state = array()) {
    return array();
  }

  public function container_edit_form_submit(&$form_state) {
    // Do nothing
  }
}
