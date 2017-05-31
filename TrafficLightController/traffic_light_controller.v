`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: Sreenath
// Design Name:	Traffic Light Controller
// Module Name:   traffic 
// Project Name:  Weekend
// Target Devices:XCS3100
//
//////////////////////////////////////////////////////////////////////////////////
module traffic_light_controller(n_lights,s_lights,e_lights,w_lights,clk,rst_a);

	output reg 	[2:0] n_lights,s_lights,e_lights,w_lights; 
	input			clk;
	input			rst_a;

	reg [2:0] state;

	parameter [2:0] north	= 3'b000;
	parameter [2:0] north_y = 3'b001;
	parameter [2:0] south	= 3'b010;
	parameter [2:0] south_y	= 3'b011;
	parameter [2:0] east		= 3'b100;
	parameter [2:0] east_y	= 3'b101;
	parameter [2:0] west		= 3'b110;
	parameter [2:0] west_y	= 3'b111;

	reg [2:0] count; // To change total time for Green/Yellow signal
	// Time Limit for Red signal is set automatically (Sum of Green and Yellow signals of all directions)
	// count = 1 specifies 10ns

	always @(posedge clk, posedge rst_a)
		begin
			if (rst_a)
				begin
					state=north;
					count = 0;
				end
			else
				begin
					if (count == 7) // To change duration of Green Signal
						begin
						case (state)
							north :
							begin
								count = 0;
								state = north_y;
							end
							
							south :
							begin
								count = 0;
								state = south_y;
							end
							
							east :
							begin
								count = 0;
                        state = east_y;
							end
							
							west :
							begin
								count = 0;
								state = west_y;
							end
						endcase
					end
					
					if (count == 3) // To change duration of Yellow signal
						begin
						case (state)						
							north_y :
							begin
								count = 0;
								state = south;
							end
								
							south_y :
							begin
								count = 0;
                        state = east;
							end
							
							east_y :
							begin
								count = 0;
                        state = west;
							end
							
							west_y :
							begin
								state = north;
                        count = 0;
							end
						endcase // end(case)
					end // case (state)
				count = count + 1;
			end // always @ (state)
	end 


	always @(state)
		begin
         case (state)
            north :
                begin
                    n_lights = 3'b001;
                    s_lights = 3'b100;
                    e_lights = 3'b100;
                    w_lights = 3'b100;
                end // case: north

            north_y :
                begin
                    n_lights = 3'b010;
                    s_lights = 3'b100;
                    e_lights = 3'b100;
                    w_lights = 3'b100;
                end // case: north_y

            south :
                begin
                    n_lights = 3'b100;
                    s_lights = 3'b001;
                    e_lights = 3'b100;
                    w_lights = 3'b100;
                end // case: south

            south_y :
                begin
                    n_lights = 3'b100;
                    s_lights = 3'b010;
                    e_lights = 3'b100;
                    w_lights = 3'b100;
                end // case: south_y

            west :
                begin
                    n_lights = 3'b100;
                    s_lights = 3'b100;
                    e_lights = 3'b100;
                    w_lights = 3'b001;
                end // case: west

            west_y :
                begin
                    n_lights = 3'b100;
                    s_lights = 3'b100;
                    e_lights = 3'b100;
                    w_lights = 3'b010;
                end // case: west_y

            east :
                begin
                    n_lights = 3'b100;
                    s_lights = 3'b100;
                    e_lights = 3'b001;
                    w_lights = 3'b100;
                end // case: east

            east_y :
                begin
                    n_lights = 3'b100;
                    s_lights = 3'b100;
                    e_lights = 3'b010;
                    w_lights = 3'b100;
                end // case: east_y
            endcase // case (state)
     end // always @ (state)
endmodule
