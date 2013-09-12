<?php
/**
 * @file
 * Template for the 1 column panel layout.
 *
 * This template provides a three column 25%-50%-25% panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['middle']: Content in the middle column.
 *   - $content['right']: Content in the right column.
 */
?>
<div id="main" class="panel-display sm-two-column main-body group clearfix">
  
  <div class="panel-panel panel-col-top">
    <div class="inside"><?php print $content['top']; ?></div>
  </div>
  
  <div class="panel-panel panel-col-first sidebar">
    <div class="inside"><?php print $content['left']; ?></div>
  </div>

  <div class="panel-panel panel-col panel-col-middle main-content">
    <div class="inside"><?php print $content['middle']; ?></div>
  </div>
  
  <div class="panel-panel panel-col-bottom section news">
    <div class="inside"><?php print $content['bottom']; ?></div>
  </div>
</div>