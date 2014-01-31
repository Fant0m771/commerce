<p>
<?php     if (is_array($ptr)) {
            print implode(' ' . trim($prefix ) . ' ',  $ptr);
          } 
          else {
            print $prefix . $ptr; 
          }  ?>
</p>