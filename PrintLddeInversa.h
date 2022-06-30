void printLddeReverse(ldde* l){
	
	no* ptrAnt;
	ptrAnt = l->fim;
	
	while(ptrAnt)
	{	
		printf("%-3d",ptrAnt->key);
		ptrAnt = ptrAnt->ant;
	}
}
