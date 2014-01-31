<h2>Edit store address</h2>
<table>
  <thead>
    <tr>
      <th>ID</th>
      <th>City</th>
      <th>Address</th>
      <th>Opreration</th>
    </tr>
  </thead>
  <tbody>  
    <?php foreach ($content as $key => $address): ?>
      <tr class="<?php $key % 3 == 1 ? print "even" : print "odd"; ?>">
        <td><?php print $address['id']; ?></td>
        <td><?php print $address['city']; ?></td>
        <td><?php print $address['address']; ?></td>
        <td><a href="take_order_myself/edit?id=<?php print $address['id']; ?>"> <?php print t("Edit") ?> </a> &nbsp; <a onclick="if(!confirm(Drupal.t('Really Delete <?php print $address['address']; ?> address ?'))){return false;}" href="take_order_myself/delete?id=<?php print $address['id']; ?>"> <?php print t("Delete") ?> </a> </td>
      </tr>  
    <?php endforeach; ?>
  </tbody>
 </table>
 <div><a href="take_order_myself/add">Add new address</a></div>