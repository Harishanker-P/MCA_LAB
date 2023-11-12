<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title></title>
</head>
<body>
    <p><center>BILL GENERATOR</center></p> 

    <h2><center>BILL</center></h2>
    
    <table border='1' style='text-align:center;'>
            <tr>
                <th>SL NO</th>
                <th>NAME</th>
                <th>PRCE</th>
                <th>QTY</th>
                <th>TOTAL</th>
                </tr>
    <?php
    //Associative array of items as keys and its price as values
    $itemPrice=array("pen"=>5,"book"=>60,"candy"=>1); 
            if(isset($_POST['submit']))
            {
           

          
                    
                    // $_POST['submit']=null;
                    
                    $i=1;
                    $grandTotal=0;
                    foreach($itemPrice as $item => $price)
                    {
                    $total=$_POST[$item]*$price;
                    $grandTotal+=$total;
                    echo "<tr>
                    
                            <td>$i</td>
                            <td>$item</td>
                            <td>$price</td>
                            <td> {$_POST[$item]}</td> 
                            <td> {$total}</td> 
                            </tr>";
                            $i++;
                        }
                        
                    }

                    echo "<tr>
                         <td colspan='4'><b>GRAND TOTAL=></b></td>
                        
                         <td>{$grandTotal}</td>
                    </tr>";
                        ?>
           
        </table>
            <a href="bill.php">GO BACK</a>
</body>
</html>