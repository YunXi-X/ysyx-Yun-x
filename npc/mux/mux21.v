// module mux21(input a,b,s, output y);
// 	assign y = (~s&a)|(s&b);
// 
// endmodule

module my_and(input a,b, output out);
	assign out = a & b;
endmodule 

module my_or(input a,b, output out);
	assign out = a | b;
endmodule

module my_not(input a,output out);
	assign out = ~a;
endmodule

module mux21(input a,b,s, output out);

	wire s_n,temp1,temp2;

	my_not i1(.a(s),.out(s_n));
	my_and i2(.a(s_n),.b(a),.out(temp1));
	my_and i3(.a(s),.b(b),.out(temp2));
	my_or i4(.a(temp1),.b(temp2),.out(out));

endmodule















