<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php $rowed = array_chunk($rows, 3); ?>

<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rowed as $rows): ?>
  <div class='rowed'>
    <?php foreach ($rows as $id => $row): ?>
      <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
        <?php print $row; ?>
      </div>
    <?php endforeach; ?>
  </div>
<?php endforeach; ?>