var districts=[
                ["Howrah","Darjeeling","Jalpaiguri"],
                ["Agra","Allahabad","Varanasi"],
                ["Ajmer","Bikaner","Jaipur"]
];

function updateDistricts(){
        var svalue = parseInt(document.getElementById("state").value);
        var res = '<option value="-1">--------Select District--------</option>';
        if(svalue >= 0){
                for(var i=0;i<3;i++){
                        res += '<option value=' + i + '>' + districts[svalue][i] + '</option>';
                }
        }
        document.getElementById("district").innerHTML = res;  
}

function updateInfo(){
        var DArea = [ 	["1,467","2,092","2,844"],
                        ["4,027","5,482","1,578"],
                        ["8,481","28,466","14,068"]
        ];
        var pop = [     ["4,841,638","1,797,422","2,172,846"],
                        ["6,170,301","5,959,798","3,147,927"],
                        ["2,584,913","2,367,745","6,663,971"]
        ];
        var s = document.getElementById("state");
        var svalue = parseInt(s.value);
        var dvalue = parseInt(document.getElementById("district").value);
        var info = document.getElementById("info");
        var res = "";
        if(svalue == -1 || dvalue == -1){
                info.innerHTML = "";
        }
        else{
                res = '<b>Name of the State : </b>' + s.options[s.selectedIndex].text + '<br>';
                res += '<b>Name of the District : </b>' + districts[svalue][dvalue] + '<br>' ;
                res+= '<b>Area(km²) : </b>' + DArea[svalue][dvalue] + '<br>' ;
                res+=  '<b>Population : </b>' + pop[svalue][dvalue];
                info.innerHTML =res;
        }
}