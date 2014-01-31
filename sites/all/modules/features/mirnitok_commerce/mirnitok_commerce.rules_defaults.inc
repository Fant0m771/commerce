<?php
/**
 * @file
 * mirnitok_commerce.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function mirnitok_commerce_default_rules_configuration() {
  $items = array();
  $items['rules_add_shipping_price'] = entity_import('rules_config', '{ "rules_add_shipping_price" : {
      "LABEL" : "Add shipping price",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_payment", "commerce_fees" ],
      "ON" : { "commerce_fees_order" : [] },
      "IF" : [
        { "commerce_payment_order_balance_comparison" : { "commerce_order" : [ "commerce_order" ], "value" : "49990" } }
      ],
      "DO" : [
        { "commerce_fees_apply" : {
            "entity" : [ "commerce-order" ],
            "fee" : "shipping",
            "amount" : "50",
            "currency_code" : "USD",
            "include_tax" : "0"
          }
        }
      ]
    }
  }');
  return $items;
}
