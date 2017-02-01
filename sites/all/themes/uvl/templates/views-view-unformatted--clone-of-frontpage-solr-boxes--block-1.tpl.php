<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="dc-feat-more">
  <a href="/islandora/search/?type=dismax">
    <span><i class="fa fa-chevron-circle-right"></i>show all items</span>
  </a>
</div>
<ul>
  <li<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
    <a title="Sketch Language Map of Celebes" href="/islandora/object/item%3A52070#page/1/mode/thumb">
      <img class="dc-object-fit" src="/islandora/object/item%3A29487/datastream/JPG/view" alt="item:52070">
    </a>
  </li>
  <?php foreach ($rows as $id => $row): ?>
    <li<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
      <?php print $row; ?>
    </li>
  <?php endforeach; ?>
</ul>
