void printLdde(ldde* l)
{
	
	no* ptrProx;
	ptrProx = l->inicio;
	
	while(ptrProx)
	{	
		printf("%-3d",ptrProx->key);
		ptrProx = ptrProx->prox;
	}
}
