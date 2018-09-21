<?php
    echo '<a href="index.php"><h3>back</h3></a>';
?>

<?php
    include('session.php');
?>

<!DOCTYPE html>
<html>
    <head>
        <title>profile</title>
    </head>
    <body>
        <div id="profile">
            <b id="welcome">Welcome : <i><?php echo $login_session; ?></i></b>
            <b id="logout"><a href="logout.php">Log Out</a></b>
        </div>
    </body>
</html>