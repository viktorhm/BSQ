# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_generateur.pl                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlerebou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/25 09:26:24 by tlerebou          #+#    #+#              #
#    Updated: 2023/07/25 09:34:37 by tlerebou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
for (my $j = 0; $j < $x; $j++) {
if (int(rand($y) * 2) < $density) {
print "o";
}
else {
print ".";
}
}
print "\n";
}
