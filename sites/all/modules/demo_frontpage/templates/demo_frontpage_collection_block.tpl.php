<?php
$items = $variables['items'];

?>

<ul class="dc-grid dc-grid-collectiongroups">

  <?php foreach ($items as $key => $item) : ?>

    <?php if (is_int($key)) : ?>

    <li class="dc-grid-item">
      <a href="<?php print $item['link'] ?>"> 
        <div class="dc-grid-pic">
          <?php print $item['image'] ?>
        </div>
        <div class="dc-grid-caption">
          <h4>
            <?php print $item['title'] ?>
          </h4>
          <div>
            <?php print $item['desc'] ?>
          </div>
        </div>
      </a>
    </li>

    <?php endif; ?>

  <?php endforeach; ?>

  <li class="dc-grid-item dc-grid-more">
    <a href="<?php print $items['button-more']['link'] ?>">
      <div class="dc-grid-pic">
        <span>
          <i class="fa fa-chevron-circle-right"></i>
          <?php print $items['button-more']['text'] ?>
        </span>
      </div>
    </a>
  </li>

</ul>
