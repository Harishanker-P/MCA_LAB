<?php

$id=$_GET['edit'];
echo "<button onclick='test($id)'>click</button>"



?>
<script>
    test=(id)=>{
        alert(id);
    }
</script>