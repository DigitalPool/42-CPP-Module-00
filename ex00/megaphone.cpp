/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:05:52 by mac               #+#    #+#             */
/*   Updated: 2024/11/24 11:31:19 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

class	PrintUpper{
	public:
		void print(std::string text)
		{
			int j = 0;
			while (text[j]){
				std::cout << static_cast<char>(std::toupper(text[j]));
				j++;
			}
		}
};

int main(int argc, char** argv)
{
	PrintUpper printer;
	if (argc == 1) {
		printer.print("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
		std::cout << std::endl;
	} else {
		int i = 1;
		while (i < argc) {
			std::string text = argv[i];
			printer.print(text);
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}

// int main(int argc, char** argv)
// {
// 	PrintUpper printer;
// 	if (argc == 1) {
// 		printer.print("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
// 	} else {
// 		int i = 1;
// 		while (i < argc) {
// 			std::string text = argv[i];
// 			printer.print(text);
// 			if (i < argc - 1)
// 				std::cout << " ";
// 			i++;
// 		}
// 	}
// 	std::cout << std::endl;
// 	return 0;
// }
