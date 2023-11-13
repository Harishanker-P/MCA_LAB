<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>RESULT</title>
</head>
<body>

    <?php
    $python=$_GET['python'];
    $web=$_GET['web'];
    $ds=$_GET['ds'];
    
    ?>
    <table border='1'>
        
        <tr>
         <th>SUBJECTS</th>
         <th>MARK</th>
         <th>Status</th>
        </tr>
         <tr>
             <td>Web</td>
             <?php
             
             echo "<td>{$web}</td>";
             if($web<24){
                echo "<td style='color:red;'>FAIL</td>";
            }
            else
            {
                 echo "<td style='color:green;'>PASS</td>";
                
             }
             ?>
             
             
         </tr>
         <tr>
             <td>Python</td>
             <?php
             
             echo "<td>{$python}</td>";
             if($python<24){
                echo "<td style='color:red;'>FAIL</td>";
            }
            else
            {
                 echo "<td style='color:green;'>PASS</td>";
                
             }
             ?>
             
             
         </tr>
         <tr>
             <td>DS</td>
             <?php
             
             echo "<td>{$ds}</td>";
             if($ds<24){
                echo "<td style='color:red;'>FAIL</td>";
            }
            else
            {
                 echo "<td style='color:green;'>PASS</td>";
                
             }
             ?>
             
             
         </tr>
         <tr>
            <td colspan='2'>OVERALL STATUS -></td>
            
                <?php
                    if($ds<24 ||$python<24||$web<24)
                    {
                        echo "<td style='color:red;'>FAIL</td>";
                    }
                    else
                    {
                         echo "<td style='color:green;'>PASS</td>";
                        
                     }
                ?>
        
         </tr>
        
 </table>
   
</body>
</html>