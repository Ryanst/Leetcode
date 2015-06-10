#inclde <iostream>

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
	int area1 = (C-A)*(D-B);
	int area2 = (G-E)*(H-F);
	if(E>=C || A>=G || F>=D || B>=H)
		return area1+area2;

	int length = min(C, G) - max(A, E);
	int height = min(D,H) - max(B, F);

	return area1 + area2 - length*height;
}
