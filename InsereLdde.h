typedef struct No no;

struct No{
	
	int key;
	no* prox;
	no* ant;
};

typedef struct list{
	
	no* inicio;
	no* fim;
	
}ldde;

int insertValueLdde(ldde *l, int key){
	
	no* aux = malloc(sizeof(no)*1);
	no* ptrAnt = NULL;
	no* ptrProx = l->inicio;
	aux->key = key;
	aux->prox = NULL;
	aux->ant = NULL;
	
	while(ptrProx && key > ptrProx->key)
	{	
		ptrAnt = ptrProx;
		ptrProx = ptrProx->prox;
	}
	
	if(!l->inicio){

		l->inicio = aux;
		l->fim = aux;
		
	}else
		if (!ptrAnt)
		{	
			l->inicio = aux;
			aux->prox = ptrProx;
			ptrProx->ant = aux;
		}
		else 
			if(ptrAnt && ptrProx) 
			{
				ptrAnt->prox = aux;
				aux->ant = ptrAnt;
				aux->prox = ptrProx;
				ptrProx->ant = aux;			
			}
			else
				if(!ptrProx)
				{
					ptrAnt->prox = aux;
					aux->ant = ptrAnt;
					l->fim = aux;
				}
	return 0;
}
