 <div>  
   <?php $i = 0; ?>   
   <?php foreach ($chosen_elements as $key1 => $vocabularies): ?> 
     <ul class='vocabulary number-<?php print $i; ?>'><li class='vocabulary_name'><?php print $key1; ?></li>
       <?php foreach($vocabularies as $key2 => $term): ?>
         <li data-tid='<?php print $key2; ?>' data-vocabulary='<?php print $i; ?>' title=" <?php print t("Remove - ") . t($term); ?> " class='chosen_element element tip tip_right_bottom'><?php print t($term); ?> </li>
       <?php endforeach; ?>
     </ul> 
     <?php $i++; ?>
   <?php endforeach; ?>
 </div>
 <div style='clear: both;'></div>
 <input id='filter_yarn' type='button' value='<?php print t('Apply'); ?>' />
 <span style="visibility: hidden;" class="aplly_filter">Apply</span>