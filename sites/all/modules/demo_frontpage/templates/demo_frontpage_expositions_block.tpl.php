<?php
$items = $variables['items'];
?>

<ul class="dc-grid dc-grid-webexpo">

  <?php foreach ($items as $item) : ?>

    <?php print (render($item['image'])); ?>

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
