<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PRODUCTS</title>
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
            <h2><u>PRODUCT MANAGEMENT</u></h2>
            <ul>
                <li><a href="add.html">ADD PRODUCTS</a></li>
                <li><a href="view.php">VIEW PRODUCTS</a></li>
                <li><a href="delete.php">ADD PRODUCT</a></li>
            </ul>
        </div>
    </div>

</body>

</html>