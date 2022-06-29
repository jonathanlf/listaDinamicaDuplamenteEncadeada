int eraseValueLdde(ldde* l, int key){
	
	no* ptrProx = l->inicio;
	no* ptrAnt = NULL;
	
	while(ptrProx && key > ptrProx->key ){
		
		ptrAnt = ptrProx;
		ptrProx = ptrProx->prox;
	}
	
	if(!ptrProx)
	{
		printf("VALOR %d NAO ENCONTRADO!\n",key);
		system("pause");
		return 0;
	}
	else
		if(ptrAnt && ptrProx->prox)
		{	
			ptrAnt->prox = ptrProx->prox;
			ptrProx->prox->ant = ptrAnt;
			free(ptrProx);
		}
		else
			if(!ptrAnt)
			{
				l->inicio = ptrProx->prox;
				l->inicio->ant=NULL;
				free(ptrProx);
			}
			else
				if(!ptrProx->prox)
				{	
					
					l->fim = ptrAnt;
					l->fim->prox=NULL;
					//ptrAnt->prox = NULL;
					free(ptrProx);
				}
	return 0;
}
