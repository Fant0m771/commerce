<?php
/**
 * @file
 * mirnitok_yarn.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mirnitok_yarn_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'products_yarn';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Products yarn';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products yarn';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ещё';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Дополнительные настройки',
    ),
    'field_product_yarn_brand_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_yarn_color_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_product_yarn_weight_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_product_yarn_category_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_product_yarn_length_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Элементов на страницу';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Все -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Пропустить';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Связь: Commerce Товар: Referencing Материал */
  $handler->display->display_options['relationships']['field_product_variations']['id'] = 'field_product_variations';
  $handler->display->display_options['relationships']['field_product_variations']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product_variations']['field'] = 'field_product_variations';
  $handler->display->display_options['relationships']['field_product_variations']['required'] = TRUE;
  /* Поле: Commerce Товар: ID товара */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Поле: Содержимое: Путь */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_product_variations';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Поле: Commerce Товар: Картинка */
  $handler->display->display_options['fields']['field_yarn_image']['id'] = 'field_yarn_image';
  $handler->display->display_options['fields']['field_yarn_image']['table'] = 'field_data_field_yarn_image';
  $handler->display->display_options['fields']['field_yarn_image']['field'] = 'field_yarn_image';
  $handler->display->display_options['fields']['field_yarn_image']['label'] = '';
  $handler->display->display_options['fields']['field_yarn_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_yarn_image']['alter']['path'] = '[path]?id=[product_id]';
  $handler->display->display_options['fields']['field_yarn_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_yarn_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_yarn_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_yarn_image']['delta_offset'] = '0';
  /* Поле: Commerce Товар: Цвет */
  $handler->display->display_options['fields']['field_yarn_color']['id'] = 'field_yarn_color';
  $handler->display->display_options['fields']['field_yarn_color']['table'] = 'field_data_field_yarn_color';
  $handler->display->display_options['fields']['field_yarn_color']['field'] = 'field_yarn_color';
  $handler->display->display_options['fields']['field_yarn_color']['label'] = '';
  $handler->display->display_options['fields']['field_yarn_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_yarn_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_yarn_color']['type'] = 'i18n_taxonomy_term_reference_plain';
  /* Поле: Содержимое: Заголовок */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_product_variations';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]?id=[product_id]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title] ([field_yarn_color])';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Commerce Товар: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Поле: Commerce Товар: Форма добавления в корзину */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
  /* Критерий фильтра: Commerce Товар: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'yarn' => 'yarn',
  );
  /* Критерий фильтра: Содержимое: Brand (field_product_yarn_brand) */
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['id'] = 'field_product_yarn_brand_tid';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['table'] = 'field_data_field_product_yarn_brand';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['field'] = 'field_product_yarn_brand_tid';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['relationship'] = 'field_product_variations';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['operator_id'] = 'field_product_yarn_brand_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['label'] = 'Бренд';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['operator'] = 'field_product_yarn_brand_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['identifier'] = 'brand';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['vocabulary'] = 'brand';
  /* Критерий фильтра: Commerce Товар: Цвет (field_yarn_color) */
  $handler->display->display_options['filters']['field_yarn_color_tid']['id'] = 'field_yarn_color_tid';
  $handler->display->display_options['filters']['field_yarn_color_tid']['table'] = 'field_data_field_yarn_color';
  $handler->display->display_options['filters']['field_yarn_color_tid']['field'] = 'field_yarn_color_tid';
  $handler->display->display_options['filters']['field_yarn_color_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_yarn_color_tid']['expose']['operator_id'] = 'field_yarn_color_tid_op';
  $handler->display->display_options['filters']['field_yarn_color_tid']['expose']['label'] = 'Цвет';
  $handler->display->display_options['filters']['field_yarn_color_tid']['expose']['operator'] = 'field_yarn_color_tid_op';
  $handler->display->display_options['filters']['field_yarn_color_tid']['expose']['identifier'] = 'color';
  $handler->display->display_options['filters']['field_yarn_color_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_yarn_color_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_yarn_color_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_yarn_color_tid']['vocabulary'] = 'color';
  /* Критерий фильтра: Содержимое: Weight (field_product_yarn_weight) */
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['id'] = 'field_product_yarn_weight_tid';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['table'] = 'field_data_field_product_yarn_weight';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['field'] = 'field_product_yarn_weight_tid';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['relationship'] = 'field_product_variations';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['operator_id'] = 'field_product_yarn_weight_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['label'] = 'Вес';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['operator'] = 'field_product_yarn_weight_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['identifier'] = 'weight';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['vocabulary'] = 'weight';
  /* Критерий фильтра: Содержимое: Category (field_product_yarn_category) */
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['id'] = 'field_product_yarn_category_tid';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['table'] = 'field_data_field_product_yarn_category';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['field'] = 'field_product_yarn_category_tid';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['relationship'] = 'field_product_variations';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['expose']['operator_id'] = 'field_product_yarn_category_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['expose']['label'] = 'Категория';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['expose']['operator'] = 'field_product_yarn_category_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['vocabulary'] = 'tags';
  /* Критерий фильтра: Содержимое: Length (field_product_yarn_length) */
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['id'] = 'field_product_yarn_length_tid';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['table'] = 'field_data_field_product_yarn_length';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['field'] = 'field_product_yarn_length_tid';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['relationship'] = 'field_product_variations';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['operator_id'] = 'field_product_yarn_length_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['label'] = 'Длина';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['operator'] = 'field_product_yarn_length_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['identifier'] = 'length';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['vocabulary'] = 'length';

  /* Display: Yarn products */
  $handler = $view->new_display('page', 'Yarn products', 'yarn_products');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'yarn';

  /* Display: Recommended yarn */
  $handler = $view->new_display('page', 'Recommended yarn', 'recommended_yarn');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recommended yarn';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Commerce Товар: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'yarn' => 'yarn',
  );
  /* Критерий фильтра: Содержимое: Brand (field_product_yarn_brand) */
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['id'] = 'field_product_yarn_brand_tid';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['table'] = 'field_data_field_product_yarn_brand';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['field'] = 'field_product_yarn_brand_tid';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['relationship'] = 'field_product_variations';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['operator_id'] = 'field_product_yarn_brand_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['label'] = 'Бренд';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['operator'] = 'field_product_yarn_brand_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['identifier'] = 'brand';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['vocabulary'] = 'brand';
  /* Критерий фильтра: Commerce Товар: Цвет (field_yarn_color) */
  $handler->display->display_options['filters']['field_yarn_color_tid']['id'] = 'field_yarn_color_tid';
  $handler->display->display_options['filters']['field_yarn_color_tid']['table'] = 'field_data_field_yarn_color';
  $handler->display->display_options['filters']['field_yarn_color_tid']['field'] = 'field_yarn_color_tid';
  $handler->display->display_options['filters']['field_yarn_color_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_yarn_color_tid']['expose']['operator_id'] = 'field_yarn_color_tid_op';
  $handler->display->display_options['filters']['field_yarn_color_tid']['expose']['label'] = 'Цвет';
  $handler->display->display_options['filters']['field_yarn_color_tid']['expose']['operator'] = 'field_yarn_color_tid_op';
  $handler->display->display_options['filters']['field_yarn_color_tid']['expose']['identifier'] = 'color';
  $handler->display->display_options['filters']['field_yarn_color_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_yarn_color_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_yarn_color_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_yarn_color_tid']['vocabulary'] = 'color';
  /* Критерий фильтра: Содержимое: Weight (field_product_yarn_weight) */
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['id'] = 'field_product_yarn_weight_tid';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['table'] = 'field_data_field_product_yarn_weight';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['field'] = 'field_product_yarn_weight_tid';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['relationship'] = 'field_product_variations';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['operator_id'] = 'field_product_yarn_weight_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['label'] = 'Вес';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['operator'] = 'field_product_yarn_weight_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['identifier'] = 'weight';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['vocabulary'] = 'weight';
  /* Критерий фильтра: Содержимое: Category (field_product_yarn_category) */
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['id'] = 'field_product_yarn_category_tid';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['table'] = 'field_data_field_product_yarn_category';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['field'] = 'field_product_yarn_category_tid';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['relationship'] = 'field_product_variations';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['expose']['operator_id'] = 'field_product_yarn_category_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['expose']['label'] = 'Категория';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['expose']['operator'] = 'field_product_yarn_category_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_category_tid']['vocabulary'] = 'tags';
  /* Критерий фильтра: Содержимое: Length (field_product_yarn_length) */
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['id'] = 'field_product_yarn_length_tid';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['table'] = 'field_data_field_product_yarn_length';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['field'] = 'field_product_yarn_length_tid';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['relationship'] = 'field_product_variations';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['operator_id'] = 'field_product_yarn_length_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['label'] = 'Длина';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['operator'] = 'field_product_yarn_length_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['identifier'] = 'length';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['vocabulary'] = 'length';
  /* Критерий фильтра: Commerce Товар: Recommended (field_product_recommended) */
  $handler->display->display_options['filters']['field_product_recommended_value']['id'] = 'field_product_recommended_value';
  $handler->display->display_options['filters']['field_product_recommended_value']['table'] = 'field_data_field_product_recommended';
  $handler->display->display_options['filters']['field_product_recommended_value']['field'] = 'field_product_recommended_value';
  $handler->display->display_options['filters']['field_product_recommended_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'recommended/yarn';

  /* Display: relative yarn */
  $handler = $view->new_display('block', 'relative yarn', 'relative_yarn');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Контекстный фильтр: Содержимое: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_product_variations';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Все';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Commerce Товар: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'yarn' => 'yarn',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: recommended block */
  $handler = $view->new_display('block', 'recommended block', 'block_recommended');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Commerce Товар: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'yarn' => 'yarn',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Критерий фильтра: Commerce Товар: Recommended (field_product_recommended) */
  $handler->display->display_options['filters']['field_product_recommended_value']['id'] = 'field_product_recommended_value';
  $handler->display->display_options['filters']['field_product_recommended_value']['table'] = 'field_data_field_product_recommended';
  $handler->display->display_options['filters']['field_product_recommended_value']['field'] = 'field_product_recommended_value';
  $handler->display->display_options['filters']['field_product_recommended_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_product_recommended_value']['group'] = 1;
  $translatables['products_yarn'] = array(
    t('Master'),
    t('Products yarn'),
    t('ещё'),
    t('Применить'),
    t('Сбросить'),
    t('Сортировать по'),
    t('По возрастанию'),
    t('По убыванию'),
    t('Элементов на страницу'),
    t('- Все -'),
    t('Пропустить'),
    t('« первая'),
    t('‹'),
    t('›'),
    t('последняя »'),
    t('Материал referencing products from field_product_variations'),
    t('[title] ([field_yarn_color])'),
    t('Бренд'),
    t('Цвет'),
    t('Вес'),
    t('Категория'),
    t('Длина'),
    t('Yarn products'),
    t('Recommended yarn'),
    t('relative yarn'),
    t('Все'),
    t('recommended block'),
  );
  $export['products_yarn'] = $view;

  $view = new view();
  $view->name = 'taxonomy_list_of_term';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxonomy list of term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'ещё';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Применить';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Сбросить';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Сортировать по';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'По возрастанию';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'По убыванию';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'tid' => 'tid',
    'name' => 'name',
    'field_term_brand_image' => 'field_term_brand_image',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'tid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_term_brand_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Поле: Термин таксономии: ID термина */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Поле: Термин таксономии: Имя */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'yarn?brand[]=[tid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Поле: Термин таксономии: Картинка */
  $handler->display->display_options['fields']['field_term_brand_image']['id'] = 'field_term_brand_image';
  $handler->display->display_options['fields']['field_term_brand_image']['table'] = 'field_data_field_term_brand_image';
  $handler->display->display_options['fields']['field_term_brand_image']['field'] = 'field_term_brand_image';
  $handler->display->display_options['fields']['field_term_brand_image']['label'] = '';
  $handler->display->display_options['fields']['field_term_brand_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_term_brand_image']['alter']['path'] = '?brand[]=[tid]';
  $handler->display->display_options['fields']['field_term_brand_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_brand_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_term_brand_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Критерий фильтра: Словарь таксономии: Машинное имя */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'brand' => 'brand',
  );

  /* Display: Taxonomy brand list */
  $handler = $view->new_display('block', 'Taxonomy brand list', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'By brand';
  $translatables['taxonomy_list_of_term'] = array(
    t('Master'),
    t('ещё'),
    t('Применить'),
    t('Сбросить'),
    t('Сортировать по'),
    t('По возрастанию'),
    t('По убыванию'),
    t('.'),
    t('Taxonomy brand list'),
    t('By brand'),
  );
  $export['taxonomy_list_of_term'] = $view;

  return $export;
}
