<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PRODUCTS</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.5.1/css/all.min.css" integrity="sha512-DTOQO9RWCH3ppGqcWaEA1BIZOC6xxalwEsw9c2QQeAIftl+Vegovlnee1c9QX4TctnWMn13TZye+giMm8e2LwA==" crossorigin="anonymous" referrerpolicy="no-referrer" />
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-T3c6CoIi6uLrA9TneNEoa7RxnatzjcDSCmG1MXxSR1GAsXEV/Dwwykc2MPK8M2HN" crossorigin="anonymous">
    <style>
        body {
            color: b;
            background: rgb(63, 94, 251);
            background: radial-gradient(circle, rgba(63, 94, 251, 1) 0%, rgba(70, 252, 167, 0.711922268907563) 100%);
        }

        .con {
            height: 90vh;
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;

        }

        .con2 {
            /* border: 1px solid red; */
            border-radius: 20px;
            background-color: rgba(0, 195, 255, 0.441);
            padding: 50px;
            -webkit-box-shadow: 9px 11px 17px 0px rgba(0, 0, 0, 0.75);
            -moz-box-shadow: 9px 11px 17px 0px rgba(0, 0, 0, 0.75);
            box-shadow: 9px 11px 17px 0px rgba(0, 0, 0, 0.75);

        }

        ul {

            line-height: 50px;
        }

        a {
            color: lime;
            text-decoration: none;
        }

        a:hover {
            color: red;
            
        }
    </style>
</head>

<body>

    <?php
     include('db.php');
    ?>
    <div class="con">
        <div class="con2">
            <h2 class="text-center"><u>ALL PRODUCTS</u></h2>
            <?php
            
                $con=new mysqli('localhost','root','','PRODUCTS');
                $q="SELECT * FROM `poduct_details`";
                $products=$con->query($q);
                echo "<table class='table table-dark table-striped text-center'>
                
                        <thead>
                            <tr>
                                <th scope='col'>#</th>
                                <th scope='col'>NAME</th>
                                <th scope='col'>QTY</th>
                                <th scope='col'>UNIT PRICE</th>
                                <th scope='col'>EDIT</th>
                                <th scope='col'>DELETE</th>
                            </tr>
                            </thead>
                            <tbody>
                ";
                $i=1;
                while($row=$products->fetch_assoc())
                {
                    $name=$row['name'];
                    $qty=intval($row['qty']);
                    $unit_price=intval($row['unit_price']);
                    

                    echo "
                    
                    
                      <tr>
                        <th scope='row'>$i</th>
                        <td>$name</td>
                        <td>$qty</td>
                        <td>₹$unit_price </td>
                        <td><button class='btn btn-dark'><i class='fa-solid fa-pencil' style='color: #ffbe0a;'></i></button></td>
                        
                        
                        <td><button class='btn btn-dark'><i class='fa-solid fa-trash' style='color: #ff0000;'></i></button></td>
                       
                      </tr>
                    ";
                    $i++;
                }
                echo "  
                </tbody>
                </table>";
                if(1)
                {


                }
                else
                {
                    echo "something went wrong!!!! : $con->error";
                }
                
            ?>
            <button class="btn btn-dark"><a href="./index1.php">Home</a></button>
        </div>
    </div>

</body>
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-C6RzsynM9kWDrMNeT87bh95OGNyZPhcTNXj1NW7RuBCsyN/o0jlpcV8Qyq46cDfL" crossorigin="anonymous"></script>

</html>