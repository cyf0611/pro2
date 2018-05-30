<?php
$z[0]=Array("field","(@me==\"\")? @me=\" class='current' \":@me=\"\";",1506,1598);
$z[0][4]=array();
$z[0][4]['name']="typeid";
$z[0][4]['runphp']="yes";
$z[1]=Array("channelartlist","\n          <li class='{dede:field.currentstyle/}'><a class=\"first-level\" href='{dede:field name='typeurl'/}'>{dede:field name='typename'/}<span class=\"downward\"></span></a>\n            <ul class=\"drop-menu\">\n              {dede:channel type='son' noself='yes'}\n              <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\n              {/dede:channel}\n            </ul>\n          </li>\n          ",1663,2151);
$z[1][4]=array();
$z[1][4]['typeid']="1,4,7";
$z[1][4]['currentstyle']="current";
$z[2]=Array("channelartlist","\n          <li class='{dede:field.currentstyle/}'><a class=\"first-level\" href='{dede:field name='typeurl'/}'>{dede:field name='typename'/}<span class=\"downward\"></span></a>\n            <ul class=\"drop-menu\">\n              {dede:channel type='son' noself='yes'}\n              <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\n              {/dede:channel}\n            </ul>\n          </li>\n          ",2184,2678);
$z[2][4]=array();
$z[2][4]['typeid']="11,14,15,16";
$z[2][4]['currentstyle']="current";
$z[3]=Array("channelartlist","\n            <li><a {dede:field name=typeid runphp=\"yes\"}\nglobal \$dsql;\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\n\$row = \$dsql->GetOne(\$sql);\n              @me=is_array(\$row)?'href=\"javascript:void(0);\"':'';\n              {/dede:field} href=\"{dede:field name='typeurl'/}\"><strong>{dede:field name='typename'/}</strong> <i {dede:field name=typeid runphp=\"yes\"}\nglobal \$dsql;\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\n\$row = \$dsql->GetOne(\$sql);\n              @me=is_array(\$row)?'class=\"fa fa-sort-up\"':'style=\"display:none\"';\n              {/dede:field}\n              > </i> </a>\n              <ul class='dropdown'>\n                {dede:channel type='son' noself='yes'}\n                <li><a href='[field:typeurl/]'>[field:typename/]</a></li>\n                {/dede:channel}\n              </ul>\n            </li>\n            ",2961,3975);
$z[3][4]=array();
$z[3][4]['typeid']="top";

?>