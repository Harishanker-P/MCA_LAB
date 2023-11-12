<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title></title>
</head>
<body>
    <p><center>BILL GENERATOR</center></p> 

    <?php
    //Associative array of items as keys and its price as values
    $itemPrice=array("pen"=>5,"book"=>60,"candy"=>1);
    ?>

    <form action="bill2.php" method="post">
        <table border="1" style="text-align:center;">
            <tr>
                <th>SL NO</th>
                <th>NAME</th>
                <th>PRCE</th>
                <th>QTY</th>
            </tr>
           

            <?php
                
                    $i=1;
                foreach($itemPrice as $item => $price)
                {
                    echo "<tr>

                            <td>$i</td>
                            <td>$item</td>
                            <td>$price</td>
                            <td> <input type='number' name='$item' value='0'/> </td>
                        </tr>";
                        $i++;
                }
           
                    ?>
           
        </table>
        <input type="submit"  name="submit" value="Generate Bill">
    </form>

    
  

</body>
</html>