char before(char x){
	if(x=='A'){
		return 'Z';
	}else if (x>90||x<65){
		return '0';
	}
	return char(x-1);
}
