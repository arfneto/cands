var express = require("express");
var app = express();
var thisTime = "cands";

app.use(express.static(__dirname + "/public"));

app.set
(
    "view engine", 
    "ejs"
);

app.get(
    "/", 
    function(req, res)
    {
        res.render(thisTime);
    }
);

app.listen(
    process.env.PORT, 
    process.env.IP, 
    function()
    {
        console.log(thisTime + " Exercise Started");
    }
);

// Prototype Board :)

