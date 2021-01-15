do
 gy,gm,gd,gh,mi,gw=0,0,0,0,0,1
 cy,cm,cd="","",""
 ry=false
 cs="小"
 cn=0
 zy,zm,zd="","",""
 sc=""
 sx=""
 xz=""
 sy={}
 jq={}
 cj=0
 dt=0
 yc=true
 tt=""
 nt=""
end
function Initialize()
	local t=os.date("*t",os.time())
    gy,gm,gd,gh,mi,gw=t.year,t.month,t.day,t.hour,t.min,t.wday
    csc()
	cni()
	gxz()
	cns()
end
function Update()
	local t = os.date("*t",os.time())
	if (gh~=t.hour) then
		gh=t.hour
		csc()
	end
	if ((gy~=t.year) or (gm~=t.month) or (gd~=t.day)) then
		gm,gd,gw=t.month,t.day,t.wday
		if (gy==t.year) then
			yc=false
		else
			gy=t.year
			yc=true
		end
		cni()
		gxz()
		cns()
	end
	if (mi~=t.min) then
        mi=t.min
        cns()
	end
end
function cns()
	local a={"星期日","星期一","星期二","星期三","星期四","星期五","星期六"}
	SKIN:Bang("!SetVariable","Year",gy)
	SKIN:Bang("!SetVariable","Month",gm)
	SKIN:Bang("!SetVariable","Day",gd)
	SKIN:Bang("!SetVariable","Hour",string.format("%02d",gh))
	SKIN:Bang("!SetVariable","Minute",string.format("%02d",mi))
	SKIN:Bang("!SetVariable","WeekDay",a[gw])
	SKIN:Bang("!SetVariable","CNYear",cy)
	SKIN:Bang("!SetVariable","CNMonth",cm)
	SKIN:Bang("!SetVariable","CNDay",cd)
	SKIN:Bang("!SetVariable","GZYear",zy)
	SKIN:Bang("!SetVariable","GZMonth",zm)
	SKIN:Bang("!SetVariable","GZDay",zd)
	SKIN:Bang("!SetVariable","SCHour",sc)
	SKIN:Bang("!SetVariable","SXYear",sx)
	SKIN:Bang("!SetVariable","Constellation",xz)
	SKIN:Bang("!SetVariable","TodayText",tt)
	SKIN:Bang("!SetVariable","NoteText",nt)
end
function cni()
	dt=math.floor(atj(gy,gm,gd,12))
    if (dt==nil) then
        return nil
	end
	if (yc) then
		cyi()
	end
	cmi()
	cgz()
end
function cyi()
	if ((gy<1980) and (gy>2050)) then
		return nil
	end
	do
		local a ="7690908E9DB8CDD3BE9E745854505A6F96B7D1D1CDBDB09A7A49202A66A3C8CBC8C2C6C8B9884111266699B3BBC3CDD3CDB582503C3F5A7292B2CFD4CFB99A8780705B4A5780B0C5C8B59C989EA28F6D58667E98A39C9D9DA6ABA0968F8B8882716A7893A7A39E9BA8B8BDA87E574A6382908F96ACC8D2CEB28862524C516380AEC5D7CFC8B5A789632F1A4588BCCECBC5C2C7C2A46520154684ABB7C1C7CED2C09D66433E506682A2C1D2D3C1A88C847B6B564D6999BBC7BEA39897A39D85645E718C9C9C9A989FABA79F95918D88776A67839CA5A49AA5B3C0B8966A45516F889193A1BED0D6C2A07158474D55709ABDD3D5CEBDB09975461D2966A9CACFC8C3C4C4B6873D142A689BB6BCC1CCCFCAAE825041475F7590B2C9D4C9B29983837864525A7EA9C4C1AF98949EA4987762677E939A97949AA4ABA89C97928D816E606E8DA2A6A0A2ADBDC3AB805342597B8D9499B3CAD7CFB6885F4B464B6285B0CDD6D4C6B7A4885C2D1A458CBED2CDC3C4C2BFA06323184986AEB7C2C4CBCFBB98674745576983A1BCD0CEBEA08C8380765E536A92B8C1B7A19097A6A38D6F64728697939391A0AAAAA69E97928B75615F7A96A6A6A1A8BAC4BC9A67404667869097A8C3D1DAC4A1724F434553749DC3D4D9CDC0AB9773421B2B68ADCBD3C8C1C3BFB3843E182C6D9EB4BEC0C8CDC3AB7F544651627792ACC5D1C5AD938484836D595F78A6BBBFA695929EA9A0806B6A7B8D938F8D96A6ACADA59C99918169566684A2A7A6A5B3C4C4AF834D3951748E95A1B7CDDAD1B7875D444048628BB2D1D9D5C7B3A286592B1A498DC3D2CEC5BFBFBC9D61261D4E88AEBABFC0CBC8B695684D4D5D6E849CB8CCCBB79C8985897E665A698CB1BEAF9C8D97A8AB95786B70848C8F898CA0A9B2ABA59C9A8B7359557094A6AAA7ADBFC6C19C653A3B6183929EABC6D7D8C7A26F4A3E405376A2C6D8D8D0BCAB9370411A2D6EACCED5C7C1BDBEAD82411B34709EB5BDBEC4C8BFA77D594D5B67788EA9C2CBBFAB8C868B8978625D779EB7B7A19090A2AEA68C726C78878A878596A6B0B3AAA59E9382624C5D7EA2AAABAABAC3CBB084492F48738C99A8B9D2DAD4B58A56403B466390B5D5DAD5C7B19E84562A1F4A91C3D5CEC3BDBBB799642923538CABBBBBC0C4C4B3916A555466708397B7C3C8B299858A9087715D6887A8B9A898899AACB0A0816C747B8784818B9EADB7B1ABA39D8B724F4B6A91A8"
        local b = {0,42756,-55}
        for i=4,#a/2+3 do
			b[i]=tonumber(string.sub(a,(i-4)*2+1,(i-4)*2+2),16)-145
        end

        for i=4,2,-1 do
            for j=i,#b do
                b[j]=b[j]+b[j-1]
            end
        end
        local e=atj(gy-1,10,1,0)
        local k=math.floor((e-2451550.26)/29.530982)
		for i=1,24 do
			sy[i]=(b[k+i+252]+3519559067.1)/1440+0.5
		end
    end
    do
        local b="CJFMKSOUPTOTOWNVLVMUIQHRIRKQMSMNKGI@J@KBKGNJMIOJOIPHOIPGQFPHONNQJVKUFQDOAK@HAKCMFOIOMSNRLQMQKOLPMPNNNPQMRHQDQCLAE@EABBFHLKQNSOQKNHJHIMHODRDQBOCQDQEOEOCKAEACEGIIKLOLKGIGJGLHPMTLVJVHUJQIIJFHAEAEAFEIJOPSRTPRMTJQEQEPCODQFRHPHQHMGFGBIAH@EAIDGDKHNHOGPIQFRFRHSNQQLSIPCK@J@IAICLENHOJQNWPVMULQGLFLGMJNNSQQSMSHSGQELEKEGCHFJGOJRMTLRIPJNOLSIWKXHUGTEQCLALAKBICHINNPPTTURQQQPOPMQOSMVLYLZNWMOMNLIJJLLMONQRSRTRRRPVMUIVHUFUIXMZPZPZNSIKFEHDJEIGMIKHOMRNUOXQYNXJVHVNTQPTNRHMDJCIDIHOLSOTPUPXOWKWLTHPGQGPJQMVRUUQULTHOCICIDGCJGNIPIRKRJRHQHPNMOGPFQCPCPCNCJ@J@G@FAHGNKPKRNPIKILJLKMNOOLRJTIVKVJOIJEDABACCHELJPLPKNKMPIQFSFRAOBPCPEQGSGNDHABABDCDFJJKILJLILFLGNFOCPBRGPJLNMNGJEIDFCDDGFIJLKOLTKSGTGREPFSHSKSLVMSMMMINFKBF@E@CAHFNKSMUNVJSFPDPJNMIPIPENDOENFLGOFLEJDKFPKSKVNTJOINHNJPNSSTWRYNZNWKQJOIIDHEIELGQNVPXQWQUTOTIUIUFTHVIVKUJUIRGLFIGJIIHKKLKLMOPOQMQNQKTIUIXOXPTRQOJIGHFGHGKKNMOOQRRXR[MZLXGSFSGTITLYNVOQNLOJMFJGKFHEJGLHOJRLUJTFRERJQNMROTLRKRIMGIEICHDHCIEOHRIVMWJTJSJSJPJRLONMRLULSHMFKDHCIFLHQJTMVMVKTJRNNOGQFQCPFTJVMVMVJPEH@D@FAFAIEJDHGLJMLNOQRNSJRFTHTJQLOJHEEBCAFBJHNLQMROPSLSFSGSCOBPBPDPGUKUMRLMLJHDCBCABAEFJHMIOKQHQERDSIRJKLJLFJFJFHEDCDBCCEDIGPITIVJTDOCOCOFPISKQMOPMTOULPJMEG@E@GBJEOKTKUITHSMPOLSLTGQHRGPINIPHMEH@E@GBJBNIQJQKRLQKOKOLMOJQHTKVLTOTNOJMILFLDLFNHPJSMSSOTIUIVGUIWKXMXO[PXNSKOLMIHEGEFEGIMORUTWUWOVHSESITKPNPNJKJLJJKILKMKLJJKKQKVJYLYHTGSGTIUMZQZTXVUWSTMOKNGIDIEJEMGRNVOZNZLYOUOLPJPHOIRKRMPLPKMHJEIDLDMCOFPDOGRIRJQJQKNMKPJUNVMSMRJJCFAF@HALFOGQHRKTQSTMUJSEOCOCPGQIULTKPHKFKDHAHCGAFDIGIHJKMMJNFOBPEPGNKPMMJLIIEG@E@E@E@EEGLHPGUIVFSFTFSGQGSGQJPLOOONJHGHEDCFEIHMJPMTKTGSDSHQJKKIKFJHNLPOPPPLKGFBC@G@J@ODPCODQFQHRKUMSNNNKQLRKQLQJKDGBFAHALGRJVKXLWPSQKSKSGQHRHQJQKUNUNSKPIOEJ@H@H@HDLHOKOMQMMOJQGTJUJQLQKMIMJMHMFLELDKDLHOPOUMYMWFRER"
        local c={}
        local d={0,21200,61,91,143,158,192,183,194,155,145,81,54,-19,-51,-115,-140,-176,-186,-192,-177,-158,-123,-85}
        local e={525877,-4,2,-2,0,-3,1,0,-1,3,-3,4,-5,2,-1,1,3,-4,4,-3,7,-4,4,-5}
        for i=3,24 do
            d[i]=d[i]+d[i-1]
        end
        for i=2,24 do
            d[i]=d[i]+d[i-1]
        end
        for i=2,24 do
            e[i]=e[i]+e[i-1]
        end
        for i=1,24 do
            c[i]={}
            c[i][1]=0
            c[i][2]=d[i]
            for j=1,70 do
                c[i][j+2]=string.byte(b,(j-1)*24+i)+e[i]
            end
            for j=3,#c[i] do
                c[i][j]=c[i][j]+c[i][j-1]
            end
        end
        local k = 1
		for i=gy-1,gy+1 do
			for j=(((i>=gy) and 1) or 24),(((i<=gy) and 24) or 2) do
				jq[k]=(c[j][i-1978]+3519712829.1)/1440+0.5
				k=k+1
			end
		end
	end
end
function cmi()
	do
		local k,l,n,s=1,1,12,1
		while (math.floor(jq[1])>=math.floor(sy[k+1])) do
			k=k+1
		end
		for i=k,16 do
			if (math.floor(jq[l])>=math.floor(sy[i+1])) then
				n=n-1
				cn=n+100*s
				if ((gy==2033) and (n<11)) then
					n=n+1
					l=l+2
				end
			else
				l=l+2
			end
			if (n==13) then
				n=1
				s=0
				cj=math.floor(sy[i+1])
			else
				n=n+1
			end
			if (l>26) then
                break
			end
		end
		local a = {"Ο","一","二","三","四","五","六","七","八","九","十","冬","腊","初","十","廿"}
		cy=""
		if (dt>=cj) then
			for i=1,#tostring(gy) do
				cy=cy..a[tonumber(string.sub(tostring(gy),i,i))+1]
			end
		else
			for i=1,#tostring(gy-1) do
				cy=cy..a[tonumber(string.sub(tostring(gy-1),i,i))+1]
			end
		end
		cy=cy.."年"
		n=k
		while (dt>=math.floor(sy[n])) do
			n=n+1
		end
		cs=(math.floor(sy[n])-math.floor(sy[n-1])>29.1) and "大" or "小"
		local d=dt-math.floor(sy[n-1])+1
		if (d==30) then
			cd="三十"
		elseif (d>20) then
			cd="廿"..a[d%10+1]
		elseif (d==20) then
			cd="二十"
		elseif (d>10) then
			cd="十"..a[d%10+1]
		elseif (d==10) then
			cd="初十"
		else
			cd="初"..a[d%10+1]
		end
		n=n-k
		local m =(n+9)%12+1
		if (cn==0) then
			ry=false
		elseif (cn<100) then
			if (n<cn+3) then
				m=(n-3)%12+1
				ry=false
			elseif (n==cn+3) then
				m=(n-4)%12+1
				ry=true
			else
				m=(n-4)%12+1
				ry=false
			end
		elseif (n<cn-109) then
			m=(n+9)%12+1
			ry=false
		elseif (n==cn-109) then
			m=(n+8)%12+1
			ry=true
		else
			m=(n+8)%12+1
			ry=false
		end
		cm=(m==1) and "正" or a[m+1].."月"..cs--如果不想要农历月是不是大小月则删除“..cs”
		if (ry) then
			cm="闰"..cm
		end
	end
	do
		local a={"冬至","小寒","大寒","立春","雨水","惊蛰","春分","清明","谷雨","立夏","小满","芒种","夏至","小暑","大暑","立秋","处暑","白露","秋分","寒露","霜降","立冬","小雪","大雪"}
		local b={"0101*春节","*清明节","0505*端午节","0707*七夕","0815*中秋节","0909*重阳节","0101*下年春节","0115*元宵节","0202*龙抬头","0715*中元鬼节","1015*下元节","1208*腊八节","1224*小年灶王节","1299*除夕"}
		local m,d,w=jtc(dt)
		local x=string.format("%02d%02d",m,d)
		b[2]=string.format("%02d%02d",jtc(math.floor(jq[8])))..b[2]
		tt=""
		for i=1,#b-1 do
			if (string.sub(b[i],1,4)==x) then
				tt=string.sub(b[i],6,-1)
				break
			end
		end
		if ((dt==cj-1) or (dt==w-1)) then
			tt="除夕"
		end
		local k=1
		while (cj>=math.floor(sy[k+1])) do
			k=k+1
		end
		if (dt==math.floor(sy[k-1]+23)) then--北方“灶王节”则将+23改为+22。清朝改为“官三民四船家五”后，南方仍沿用旧习为腊月24日，而北方逐渐演化为统一的清朝官方日为腊月23日
			tt="灶王节"
		elseif (dt==math.floor(sy[k-1]+7)) then
			tt="腊八节"
		end
		local p=(math.floor(jq[12])+49)%10+1
		p=(p<=3) and (math.floor(jq[12])+3-p) or (math.floor(jq[12])+13-p)
		local q=(math.floor(jq[14])+49)%12+1
		q=(q<=8) and (math.floor(jq[14])+8-q) or (math.floor(jq[14])+20-q)
		x=""
		if (dt==p) then
			x="今天入梅"
		elseif (dt==q) then
			x="今天出梅"
		end
		if (#tt>0) then
			if (#x>0) then
				tt=x.."、"..tt
			else
				tt="今天是"..tt
			end
		elseif (#x>0) then
			tt=x
		end
		for i=1,#jq do
			if (dt==math.floor(jq[i])) then
				if (i==8) then
					break
				elseif (#tt>0) then
					tt=tt.."、"..a[i].."节气"
				else
					tt="今天是"..a[i].."节气"
				end
				break
			end
		end
		local c={"0101*元旦*0000","0214*情人节*0000","0308*妇女节*1910","0312*植树节*1979","0401*愚人节*1564","0501*劳动节*1938","0504*青年节*1950","0601*儿童节*1950","0701*建党节*1921","0801*建军节*1927","0910*教师节*1985","1001*国庆节*1949","1031*万圣节*0000","1225*圣诞节*0000"}
		local e={"0520*母亲节*1914","0630*父亲节*1934","1144*感恩节*1863"}
		local r,u,v=0,0,0
		for i=1,#e do
			r=math.floor(atj(gy,tonumber(string.sub(e[i],1,2)),1,12))
			u=(r+1)%7
			v=tonumber(string.sub(e[i],4,4))
			r=((u>v) and 8 or 1)+(tonumber(string.sub(e[i],3,3))-1)*7+v-u
			e[i]=string.sub(e[i],1,2)..string.format("%02d",r)..string.sub(e[i],5,-1)
		end
		x=string.format("%02d%02d",gm,gd)
		local z=""
		for i,v in ipairs(e) do
			c[#c+1]=v
		end
		for i=1,#c do
			if ((x==string.sub(c[i],1,4)) and (gy>=tonumber(string.sub(c[i],-4,-1)))) then
				z=string.sub(c[i],6,-6)
				break
			end
		end
		local o=math.floor(jq[8])
		k=1
		while (math.floor(sy[k])<=o) do
			k=k+1
		end
		o=math.floor(sy[k-1])+14
		d=(o+1)%7
		_,m,d=jta(o+7-d)
		c[#c+1]=string.format("%02d%02d",m,d).."*复活节*0000"
		table.sort(c)
		if (x==string.format("%02d%02d",m,d)) then
			if (#z>0) then
				z=z.."、复活节"
			else
				z="复活节"
			end
		end
		if ((#tt>0) and (#z>0)) then
			tt=tt.."，也是"..z
		elseif (#z>0) then
			tt="今天是"..z
		elseif (#tt==0) then
			tt=" "
		end
		local g={}
		for i=1,6 do
			_,m,d=jta(ctj(tonumber(string.sub(b[i],1,2)),tonumber(string.sub(b[i],3,4)),false))
			g[i]=string.format("%02d%02d",m,d)..string.sub(b[i],5,-1).."*0000"
		end
		_,m,d=jta(w)
		g[#g+1]=string.format("%02d%02d",m+12,d).."*下年春节*0000"
		local h={}
		k=1
		while (string.sub(g[k+1],1,4)<=x) do
			k=k+1
		end
		for i=1,2 do
			if (k<=#g) then
				h[i]=g[k+i]
			else
				break
			end
		end
		local y=0
		k=1
		while (math.floor(jq[k])<=dt) do
			k=k+1
		end
		if (k==8) then
            k=k+1
        end
		if (k<=#jq) then
            y,m,d=jta(math.floor(jq[k]))
            if (y>gy) then
                m=m+12
            end
            h[#h+1]=string.format("%02d%02d",m,d).."*"..a[(k+23)%24+1].."*0000"
		end
		if ((dt>p-30) and (dt<p)) then
			_,m,d=jta(p)
			h[#h+1]=string.format("%02d%02d",m,d).."*入梅*0000"
		elseif ((dt>p) and (dt<q)) then
			_,m,d=jta(q)
			h[#h+1]=string.format("%02d%02d",m,d).."*出梅*0000"
		end
		p=math.floor(jq[13]+49)%10+1
		p=(p<7) and (math.floor(jq[13])+27-p) or (math.floor(jq[13])+37-p)
		q=math.floor(jq[16]+49)%10+1
		q=(q<7) and (math.floor(jq[16])+7-q) or (math.floor(jq[16])+17-q)
		if ((dt>p-30) and (dt<p)) then
			_,m,d=jta(p)
			h[#h+1]=string.format("%02d%02d",m,d).."*初伏*0000"
		elseif ((dt>p) and (dt<p+10)) then
			_,m,d=jta(p+10)
			h[#h+1]=string.format("%02d%02d",m,d).."*中伏*0000"
		elseif ((dt>p+10) and (dt<q)) then
			_,m,d=jta(q)
			h[#h+1]=string.format("%02d%02d",m,d).."*末伏*0000"
		end
		local f={"*一九","*二九","*三九","*四九","*五九","*六九","*七九","*八九","*九九"}
		k=0
		if (math.floor(jq[1])+80>=dt) then
			k=1
		elseif (math.floor(jq[25])<=dt) then
			k=25
		end
		if (k~=0) then
			local n=math.floor(math.floor(dt-jq[k]+1)/9)
			if (n<8) then
				_,m,d=jta(math.floor(jq[k])+(n+1)*9)
				h[#h+1]=string.format("%02d%02d",m,d)..f[n+2].."*0000"
			end
		end
		k=0
		for i=1,#c do
			local n=tonumber(string.sub(c[i],1,2))
			if (((tonumber(string.sub(c[i],1,2))==gm) and (tonumber(string.sub(c[i],3,4))>gd)) or (tonumber(string.sub(c[i],1,2))==gm+1)) then
				h[#h+1]=c[i]
				k=k+1
			end
			if (k>=1) then
				break
			end
		end
		table.sort(h)
		nt="    "
		for i=1,#h do
			if (h[i]>="13") then
				nt=nt..(tonumber(string.sub(h[i],1,2))-12).."."..tonumber(string.sub(h[i],3,4)).." "..string.sub(h[i],6,-6).."  "
			elseif (tonumber(string.sub(h[i],-4,-1))<gy) then
				nt=nt..tonumber(string.sub(h[i],1,2)).."."..tonumber(string.sub(h[i],3,4)).." "..string.sub(h[i],6,-6).."  "
			end
		end
	end
end
function csc()
	local b={"子","丑","寅","卯","辰","巳","午","未","申","酉","戌","亥"}
	sc=b[math.floor((gh+1)/2)%12+1].."时"
end
function gxz()
    local a={"摩羯座","水瓶座","双鱼座","白羊座","金牛座","双子座","巨蟹座","狮子座","处女座","天秤座","天蝎座","射手座","摩羯座"}
    if (dt<(jq[(gm-1)*2+3])) then
        xz=a[gm]
    else
        xz=a[gm+1]
    end
end
function cgz()
	local a={"甲","乙","丙","丁","戊","己","庚","辛","壬","癸"}
	local b={"子","丑","寅","卯","辰","巳","午","未","申","酉","戌","亥"}
	local c={"鼠","牛","虎","兔","龙","蛇","马","羊","猴","鸡","狗","猪"}
	local y = gy
	if (y<0) then
		y=y+1
	elseif (y==0) then
		return nil
	end
	y=(dt>=math.floor(jq[4])) and (y-4) or (y-5)
	zy=a[y%10+1]..b[y%12+1]
	sx=c[y%12+1]
	local n = gy*12+gm
	if (dt<math.floor(jq[gm*2])) then
		n=n-1
	end
	zm=a[(n+12)%10+1]..b[(n+12)%12+1]
	zd=a[(dt+49)%10+1]..b[(dt+49)%12+1]
end
function atj(y,m,d,h)
	if (m<=2) then
		y=y-1
		m=m+12
	end
	local c = math.floor(y/100)
	local j = math.floor(365.25*(y+4716))+math.floor(30.60001*(m+1))+(d+h/24)-1524.5
	if (j>=2299171) then
		return j+2-c+math.floor(c/4)
	elseif (j<2299161) then
		return j
	end
end
function jta(j)
	j=j+0.5
	local z = math.floor(j)
	local f = j-z
	local a = z
	if (z>=2299161) then
		local v = math.floor((z-1867216.25)/36524.25)
		a=z+1+v-math.floor(v/4)
	end
	local b = a+1524
	local c = math.floor((b-122.1)/365.25)
	local d = math.floor(365.25*c)
	local e = math.floor((b-d)/30.6001)
	local q = b-d-math.floor(30.6001*e)+f
	local y,m = 0,0
	if (e<14) then
		m=e-1
	else
		m=e-13
	end
	if (m>2) then
		y=c-4716
	else
		y=c-4715
	end
	return y,m,math.floor(q)
end
function jtc(j)
	local k=1
	while (cj>=math.floor(sy[k+1])) do
		k=k+1
	end
	local m = 1
	while (j>=math.floor(sy[k+m])) do
		m=m+1
	end
	local d =j-math.floor(sy[k+m-1])+1
	local w = 0
	if (ry and (cn<100)) then
		if (m>cn) then
			m=m-1
		end
		w=math.floor(sy[k+13])
	else
		w=math.floor(sy[k+12])
	end
	return m,d,w
end
function ctj(m,d,r)
	local k = 1
	while (cj>=math.floor(sy[k+1])) do
		k=k+1
	end
	if (ry and (cn<100)) then
		if (m>cn) then
			m=m+1
		elseif (r and (m==cn)) then
			m=m+1
		end
	end
	return (math.floor(sy[k+m-1])+d-1)
end
