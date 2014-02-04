<?php

/**
 * @file
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $caption: The caption for this table. May be empty.
 * - $header_classes: An array of header classes keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $field_classes: An array of classes to apply to each field, indexed by
 *   field id, then row number. This matches the index in $rows.
 * @ingroup views_templates
 */
?>
<?php $rowed = array_chunk($rows, 3); ?>
<div id="taxonomy-list-terms">
  <div class="terms-container">
    <?php foreach ($rowed as $rows): ?>
      <ul class="list-rows-terms">
        <?php foreach ($rows as $key => $row): ?>
          <li class="term-row<?php if ($key == 0) { print " first"; } elseif ($key == 2) { print " last"; } ?>">
            <div><?php print $row['field_term_brand_image']; ?></div>
            <div class='term-name'><?php print $row['name']; ?></div>
          </li>
        <?php endforeach; ?>
      </ul>
    <?php endforeach; ?>
    <div class='clear'></div>
  </div>
</div>

