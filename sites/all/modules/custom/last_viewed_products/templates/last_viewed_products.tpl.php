<?php foreach ($content as $key => $value): ?>
    <div class="product-item-viewed product-node-id-<?php print $key; ?>">
      <?php print l($value['title'], $value['path']); ?>
      <?php if (isset($value['image'])): ?>
        <div class='image-viewed'><img src='<?php print $value['image']; ?>' /></div>
      <?php endif; ?>
    </div>
<?php endforeach; ?>
