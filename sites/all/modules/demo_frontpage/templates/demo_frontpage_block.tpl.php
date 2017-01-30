<?php
/**
 * @file
 * Theme implementation to display a block
 **/

$items = $variables['items'];
?>

<div class="dc-feat-banner">
  <div class="dc-feat-primary">
    <?php if ($items['first-item']['link'])  {
      print '<a href="' . $items['first-item']['link'] . '">';
    } ?>
    <div class="dc-feat-pic">
        <?php print $items['first-item']['image']; ?>
        <div class="dc-feat-header">
          <h2><?php print $items['first-item']['title'] ?></h2>
          <h3><?php print $items['first-item']['desc'] ?></h3>
        </div>
    </div>
    <?php if ($items['first-item']['link']): ?>
        </a>
      <?php endif; ?>
  </div>
</div>
<div class="dc-feat-browser">
  <div class="dc-feat-more">
    <a href="<?php print $items['button-more']['link'] ?>">
      <span>
          <i class="fa fa-chevron-circle-right"></i>
          <?php print t($items['button-more']['text']) ?>
      </span>
    </a>
  </div>
  <ul>
    <?php

    foreach ($items['feat-browser'] as $item) : ?>
      <li>
        <a href="<?php print $item['link'] ?>" title="<?php print $item['title']; ?>">
          <h3>
            <?php print $item['title']; ?>
          </h3>
          <?php print $item['image']; ?>
        </a>
      </li>
    <?php endforeach; ?>
  </ul>
</div>

