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
  $view->name = 'yarn_displays_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Yarn displays list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Yarn displays list';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Элементов на страницу';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Все -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Пропустить';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« первая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ предыдущая';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'следующая ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'последняя »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Поле: Содержимое: Заголовок */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Критерий сортировки: Содержимое: Дата публикации */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Критерий фильтра: Содержимое: Опубликовано */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Критерий фильтра: Содержимое: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'yarn_display' => 'yarn_display',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'yarn-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Yarn list';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['yarn_displays_list'] = array(
    t('Master'),
    t('Yarn displays list'),
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
    t('‹ предыдущая'),
    t('следующая ›'),
    t('последняя »'),
    t('Page'),
  );
  $export['yarn_displays_list'] = $view;

  $view = new view();
  $view->name = 'yarn_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Yarn list';
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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
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
      'secondary_label' => 'Advanced options',
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
    'field_product_yarn_category_tid_1' => array(
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
  );
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
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
  $handler->display->display_options['row_plugin'] = 'node';
  /* Поведение при отсутствии результатов: Глобальный: Текстовое поле */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No match found';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Поле: Содержимое: Заголовок */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Критерий сортировки: Содержимое: Дата публикации */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Критерий фильтра: Содержимое: Опубликовано */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Критерий фильтра: Содержимое: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'yarn_display' => 'yarn_display',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Критерий фильтра: Содержимое: Brand (field_product_yarn_brand) */
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['id'] = 'field_product_yarn_brand_tid';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['table'] = 'field_data_field_product_yarn_brand';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['field'] = 'field_product_yarn_brand_tid';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['operator_id'] = 'field_product_yarn_brand_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['label'] = 'Бренд';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['operator'] = 'field_product_yarn_brand_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['identifier'] = 'field_product_yarn_brand_tid';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['vocabulary'] = 'brand';
  /* Критерий фильтра: Содержимое: Length (field_product_yarn_length) */
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['id'] = 'field_product_yarn_length_tid';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['table'] = 'field_data_field_product_yarn_length';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['field'] = 'field_product_yarn_length_tid';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['operator_id'] = 'field_product_yarn_length_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['label'] = 'Длина';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['operator'] = 'field_product_yarn_length_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['identifier'] = 'field_product_yarn_length_tid';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['vocabulary'] = 'length';
  /* Критерий фильтра: Содержимое: Category (field_product_yarn_category) */
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['id'] = 'field_product_yarn_category_tid_1';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['table'] = 'field_data_field_product_yarn_category';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['field'] = 'field_product_yarn_category_tid';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['operator_id'] = 'field_product_yarn_category_tid_1_op';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['label'] = 'Категория';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['operator'] = 'field_product_yarn_category_tid_1_op';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['identifier'] = 'field_product_yarn_category_tid_1';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['vocabulary'] = 'tags';
  /* Критерий фильтра: Содержимое: Weight (field_product_yarn_weight) */
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['id'] = 'field_product_yarn_weight_tid';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['table'] = 'field_data_field_product_yarn_weight';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['field'] = 'field_product_yarn_weight_tid';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['operator_id'] = 'field_product_yarn_weight_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['label'] = 'Вес';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['operator'] = 'field_product_yarn_weight_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['identifier'] = 'field_product_yarn_weight_tid';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['vocabulary'] = 'weight';

  /* Display: Yarn */
  $handler = $view->new_display('page', 'Yarn', 'page');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
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
      'secondary_label' => 'Advanced options',
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
    'field_product_yarn_category_tid_1' => array(
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
    'field_yarn_color_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
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
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Содержимое: Опубликовано */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Критерий фильтра: Содержимое: Тип */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'yarn_display' => 'yarn_display',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Критерий фильтра: Содержимое: Brand (field_product_yarn_brand) */
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['id'] = 'field_product_yarn_brand_tid';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['table'] = 'field_data_field_product_yarn_brand';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['field'] = 'field_product_yarn_brand_tid';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['group'] = 1;
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
  /* Критерий фильтра: Содержимое: Length (field_product_yarn_length) */
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['id'] = 'field_product_yarn_length_tid';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['table'] = 'field_data_field_product_yarn_length';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['field'] = 'field_product_yarn_length_tid';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['group'] = 1;
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
  /* Критерий фильтра: Содержимое: Category (field_product_yarn_category) */
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['id'] = 'field_product_yarn_category_tid_1';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['table'] = 'field_data_field_product_yarn_category';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['field'] = 'field_product_yarn_category_tid';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['operator_id'] = 'field_product_yarn_category_tid_1_op';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['label'] = 'Категория';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['operator'] = 'field_product_yarn_category_tid_1_op';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['identifier'] = 'category';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['vocabulary'] = 'tags';
  /* Критерий фильтра: Содержимое: Weight (field_product_yarn_weight) */
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['id'] = 'field_product_yarn_weight_tid';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['table'] = 'field_data_field_product_yarn_weight';
  $handler->display->display_options['filters']['field_product_yarn_weight_tid']['field'] = 'field_product_yarn_weight_tid';
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
  $handler->display->display_options['path'] = 'yarn';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Yarn';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Sale yarn */
  $handler = $view->new_display('page', 'Sale yarn', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Распродажа пряжи';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
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
      'secondary_label' => 'Advanced options',
    ),
    'field_product_sale_product_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
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
    'field_product_yarn_category_tid_1' => array(
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
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Критерий фильтра: Содержимое: Опубликовано */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Критерий фильтра: Содержимое: Тип */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'yarn_display' => 'yarn_display',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Критерий фильтра: Содержимое: Sale product (field_product_sale_product) */
  $handler->display->display_options['filters']['field_product_sale_product_value']['id'] = 'field_product_sale_product_value';
  $handler->display->display_options['filters']['field_product_sale_product_value']['table'] = 'field_data_field_product_sale_product';
  $handler->display->display_options['filters']['field_product_sale_product_value']['field'] = 'field_product_sale_product_value';
  $handler->display->display_options['filters']['field_product_sale_product_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_product_sale_product_value']['group'] = 1;
  $handler->display->display_options['filters']['field_product_sale_product_value']['expose']['operator_id'] = 'field_product_sale_product_value_op';
  $handler->display->display_options['filters']['field_product_sale_product_value']['expose']['label'] = 'Распродажа';
  $handler->display->display_options['filters']['field_product_sale_product_value']['expose']['operator'] = 'field_product_sale_product_value_op';
  $handler->display->display_options['filters']['field_product_sale_product_value']['expose']['identifier'] = 'field_product_sale_product_value';
  $handler->display->display_options['filters']['field_product_sale_product_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Критерий фильтра: Содержимое: Brand (field_product_yarn_brand) */
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['id'] = 'field_product_yarn_brand_tid';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['table'] = 'field_data_field_product_yarn_brand';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['field'] = 'field_product_yarn_brand_tid';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['operator_id'] = 'field_product_yarn_brand_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['label'] = 'Бренд';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['operator'] = 'field_product_yarn_brand_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['identifier'] = 'field_product_yarn_brand_tid';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_brand_tid']['vocabulary'] = 'brand';
  /* Критерий фильтра: Содержимое: Length (field_product_yarn_length) */
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['id'] = 'field_product_yarn_length_tid';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['table'] = 'field_data_field_product_yarn_length';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['field'] = 'field_product_yarn_length_tid';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['operator_id'] = 'field_product_yarn_length_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['label'] = 'Длина';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['operator'] = 'field_product_yarn_length_tid_op';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['identifier'] = 'field_product_yarn_length_tid';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_length_tid']['vocabulary'] = 'length';
  /* Критерий фильтра: Содержимое: Category (field_product_yarn_category) */
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['id'] = 'field_product_yarn_category_tid_1';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['table'] = 'field_data_field_product_yarn_category';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['field'] = 'field_product_yarn_category_tid';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['operator_id'] = 'field_product_yarn_category_tid_1_op';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['label'] = 'Категория';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['operator'] = 'field_product_yarn_category_tid_1_op';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['identifier'] = 'field_product_yarn_category_tid_1';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_product_yarn_category_tid_1']['vocabulary'] = 'tags';
  $handler->display->display_options['path'] = 'sale/yarn';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Sale';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['yarn_list'] = array(
    t('Master'),
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
    t('No match found'),
    t('Бренд'),
    t('Длина'),
    t('Категория'),
    t('Вес'),
    t('Yarn'),
    t('Sale yarn'),
    t('Распродажа пряжи'),
    t('Распродажа'),
  );
  $export['yarn_list'] = $view;

  return $export;
}
