
#include "model_compiled.h"

;


size_t get_num_class(void) {
  return 1;
}

size_t get_num_feature(void) {
  return 5;
}

const char* get_pred_transform(void) {
  return "identity";
}

float get_sigmoid_alpha(void) {
  return 1.0;
}

float get_ratio_c(void) {
  return 1.0;
}

float get_global_bias(void) {
  return 0.0;
}

const char* get_threshold_type(void) {
  return "float64";
}

const char* get_leaf_output_type(void) {
  return "float64";
}


static inline double pred_transform(double margin) {
  return margin;
}
double predict(union Entry* data, int pred_margin) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1969716199204754326) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01733767392510030328) ) ) {
            sum += (double)0.0007289728442589428524;
          } else {
            sum += (double)0.0004988897083903606668;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.02076537995319455501) ) ) {
            sum += (double)0.00079434840449757807;
          } else {
            sum += (double)0.0006932177977488312819;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01786796629190690391) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4756525355205591388) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4529088438083754276) ) ) {
                sum += (double)0.0007498926579244657173;
              } else {
                sum += (double)0.001004880806382481718;
              }
            } else {
              sum += (double)0.0006812844495385174046;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4595373221702413469) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.536815244488509258) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02184468199994800408) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
                    sum += (double)0.0007356557647871449527;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)2.33127461073129405) ) ) {
                      sum += (double)0.0008196612800308498113;
                    } else {
                      sum += (double)0.001126608511329901243;
                    }
                  }
                } else {
                  sum += (double)0.0006983837177093527894;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)6.860143736822311489) ) ) {
                  sum += (double)0.0008503065827487759926;
                } else {
                  sum += (double)0.000756748776918082398;
                }
              }
            } else {
              sum += (double)0.0009808340888295854869;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6585108367119031358) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6243164039142820032) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)5.949758960524891727) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6019521188782922527) ) ) {
                  sum += (double)0.0006616220712083835387;
                } else {
                  sum += (double)0.0007840178788218565668;
                }
              } else {
                sum += (double)0.0007588503779809546278;
              }
            } else {
              sum += (double)0.0006257852520390461137;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5239561240717546253) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02656204255649715143) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9159152517183267728) ) ) {
                  sum += (double)0.0007558310385202704094;
                } else {
                  sum += (double)0.000540905956454149333;
                }
              } else {
                sum += (double)0.0008507962119651093277;
              }
            } else {
              sum += (double)0.0006983905085198020184;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)0.0007299300914755090788;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)0.0003981286043078798671;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
            sum += (double)0.000539139163193254594;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
              sum += (double)0.0008861774188638287496;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2040291793891025884) ) ) {
                  sum += (double)0.0006317532927522993792;
                } else {
                  sum += (double)0.0002957100041268925393;
                }
              } else {
                sum += (double)0.000691712366350964356;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02903912287516625598) ) ) {
      sum += (double)0.0006625260622868255241;
    } else {
      sum += (double)0.0008276169277578633576;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1969716199204754326) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01733767392510030328) ) ) {
            sum += (double)1.966769615042287736e-05;
          } else {
            sum += (double)-0.0002081146171471430885;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.02076537995319455501) ) ) {
            sum += (double)8.438949470919574934e-05;
          } else {
            sum += (double)-1.572979542150764289e-05;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01786796629190690391) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4756525355205591388) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4529088438083754276) ) ) {
                sum += (double)4.037830522586002721e-05;
              } else {
                sum += (double)0.0002928165678420792352;
              }
            } else {
              sum += (double)-2.754381372758343032e-05;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4595373221702413469) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.536815244488509258) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02184468199994800408) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
                    sum += (double)2.628378785144611945e-05;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)2.33127461073129405) ) ) {
                      sum += (double)0.0001094492505628453762;
                    } else {
                      sum += (double)0.0004133269986778032078;
                    }
                  }
                } else {
                  sum += (double)-1.061553557951299602e-05;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)6.860143736822311489) ) ) {
                  sum += (double)0.0001397881043293195812;
                } else {
                  sum += (double)4.716587315183566479e-05;
                }
              }
            } else {
              sum += (double)0.0002690103339652220415;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6585108367119031358) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6243164039142820032) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)6.508579178600560233) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6019521188782922527) ) ) {
                  sum += (double)-4.141087766937702664e-05;
                } else {
                  sum += (double)6.606624280539108234e-05;
                }
              } else {
                sum += (double)5.984998132754128382e-05;
              }
            } else {
              sum += (double)-8.24880157918575816e-05;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5239561240717546253) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02656204255649715143) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9159152517183267728) ) ) {
                  sum += (double)4.625730236842580368e-05;
                } else {
                  sum += (double)-0.0001665185177698731396;
                }
              } else {
                sum += (double)0.0001402728239219723841;
              }
            } else {
              sum += (double)-1.060881544464791634e-05;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)2.061536535288074285e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0003078681079401773455;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
            sum += (double)-0.0001682676492563853015;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
              sum += (double)0.000175300223772258812;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2040291793891025884) ) ) {
                  sum += (double)-7.657966066844670795e-05;
                } else {
                  sum += (double)-0.0004092625264976440112;
                }
              } else {
                sum += (double)-1.72201732263937102e-05;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      sum += (double)-4.48602146984299947e-05;
    } else {
      sum += (double)0.0001486794716382230008;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1969716199204754326) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01733767392510030328) ) ) {
            sum += (double)1.947101249025940024e-05;
          } else {
            sum += (double)-0.0002060334601103224524;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.02076537995319455501) ) ) {
            sum += (double)8.354560940775995976e-05;
          } else {
            sum += (double)-1.557250829557910171e-05;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01786796629190690391) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4756525355205591388) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4529088438083754276) ) ) {
                sum += (double)3.997453247768734336e-05;
              } else {
                sum += (double)0.0002898884062533793257;
              }
            } else {
              sum += (double)-2.726838242691179378e-05;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4595373221702413469) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.536815244488509258) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02184468199994800408) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
                    sum += (double)2.602094073834875009e-05;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)2.33127461073129405) ) ) {
                      sum += (double)0.000108354760070695835;
                    } else {
                      sum += (double)0.0004091937319390126786;
                    }
                  }
                } else {
                  sum += (double)-1.05093862089280369e-05;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)6.860143736822311489) ) ) {
                  sum += (double)0.0001383902151663431656;
                } else {
                  sum += (double)4.669420562807268535e-05;
                }
              }
            } else {
              sum += (double)0.0002663202288871010159;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6585108367119031358) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6243164039142820032) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)5.949758960524891727) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6019521188782922527) ) ) {
                  sum += (double)-4.659546131826848082e-05;
                } else {
                  sum += (double)7.350162084204950937e-05;
                }
              } else {
                sum += (double)4.88443322186330172e-05;
              }
            } else {
              sum += (double)-8.166313509524073346e-05;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5239561240717546253) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01192174046900940261) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01144422169027970067) ) ) {
                  sum += (double)2.081237809034064184e-05;
                } else {
                  sum += (double)-0.0003127858001324865201;
                }
              } else {
                sum += (double)6.793730412255381086e-05;
              }
            } else {
              sum += (double)-1.050272147549549005e-05;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)2.040920927122767361e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0003047894292142922261;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
            sum += (double)-0.0001665849791658399379;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
              sum += (double)0.0001735472314176149671;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2040291793891025884) ) ) {
                  sum += (double)-7.581386340373173023e-05;
                } else {
                  sum += (double)-0.0004051698832024287636;
                }
              } else {
                sum += (double)-1.704797976504268141e-05;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02903912287516625598) ) ) {
      sum += (double)-4.566601822946126819e-05;
    } else {
      sum += (double)0.0001164092377831156425;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1969716199204754326) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01733767392510030328) ) ) {
            sum += (double)1.927631204329264327e-05;
          } else {
            sum += (double)-0.0002039731373467172312;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.02076537995319455501) ) ) {
            sum += (double)8.271014086561265786e-05;
          } else {
            sum += (double)-1.541678510574803174e-05;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01786796629190690391) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4756525355205591388) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4529088438083754276) ) ) {
                sum += (double)3.95747784472105999e-05;
              } else {
                sum += (double)0.0002869895286858082121;
              }
            } else {
              sum += (double)-2.69956957406740857e-05;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4595373221702413469) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.536815244488509258) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02184468199994800408) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
                    sum += (double)2.576073680120874671e-05;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)2.33127461073129405) ) ) {
                      sum += (double)0.0001072712162631037487;
                    } else {
                      sum += (double)0.0004051017968595260602;
                    }
                  }
                } else {
                  sum += (double)-1.040428839797717851e-05;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)6.860143736822311489) ) ) {
                  sum += (double)0.0001370063114543629875;
                } else {
                  sum += (double)4.622725963902970056e-05;
                }
              }
            } else {
              sum += (double)0.0002636570294964171767;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6585108367119031358) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6243164039142820032) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)6.508579178600560233) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6019521188782922527) ) ) {
                  sum += (double)-4.060819912607454467e-05;
                } else {
                  sum += (double)6.468905023490379184e-05;
                }
              } else {
                sum += (double)5.876302634650666136e-05;
              }
            } else {
              sum += (double)-8.084650398461271494e-05;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5239561240717546253) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02656204255649715143) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9159152517183267728) ) ) {
                  sum += (double)4.525929393548627674e-05;
                } else {
                  sum += (double)-0.0001654698854933182482;
                }
              } else {
                sum += (double)0.0001381907269499955103;
              }
            } else {
              sum += (double)-1.039770692455931503e-05;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)2.020511558678533538e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0003017415200530022996;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
            sum += (double)-0.0001649191281840666574;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
              sum += (double)0.0001718117625423474474;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2040291793891025884) ) ) {
                  sum += (double)-7.505573093800283813e-05;
                } else {
                  sum += (double)-0.0004011181883314358454;
                }
              } else {
                sum += (double)-1.687749879349946224e-05;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      sum += (double)-4.397794291049497256e-05;
    } else {
      sum += (double)0.0001460285966538570231;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1969716199204754326) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01733767392510030328) ) ) {
            sum += (double)1.908354292651499474e-05;
          } else {
            sum += (double)-0.0002019333988110619531;
          }
        } else {
          sum += (double)-4.499916205247412522e-06;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01786796629190690391) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4756525355205591388) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4529088438083754276) ) ) {
                sum += (double)3.917903459227136791e-05;
              } else {
                sum += (double)0.000284119634686604808;
              }
            } else {
              sum += (double)-2.672573825880282403e-05;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4595373221702413469) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.536815244488509258) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02184468199994800408) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
                    sum += (double)2.550312417628603398e-05;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)2.33127461073129405) ) ) {
                      sum += (double)0.0001061984901721386797;
                    } else {
                      sum += (double)0.0004010507714156119619;
                    }
                  }
                } else {
                  sum += (double)-1.030024975353274691e-05;
                }
              } else {
                sum += (double)0.0001006108996033840147;
              }
            } else {
              sum += (double)0.0002610204512962982829;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6585108367119031358) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6243164039142820032) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)5.949758960524891727) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6019521188782922527) ) ) {
                  sum += (double)-4.572342310631608535e-05;
                } else {
                  sum += (double)7.211970988366276302e-05;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02816721160318755302) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4529088438083754276) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3601824321924683159) ) ) {
                      sum += (double)-5.029806365200783874e-06;
                    } else {
                      sum += (double)-0.0002435347256832755996;
                    }
                  } else {
                    sum += (double)0.0001001294815172773886;
                  }
                } else {
                  sum += (double)0.0002344160151380278619;
                }
              }
            } else {
              sum += (double)-8.003804107680590569e-05;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5239561240717546253) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01192174046900940261) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01144422169027970067) ) ) {
                  sum += (double)2.025702434184495547e-05;
                } else {
                  sum += (double)-0.0003101105436130806542;
                }
              } else {
                sum += (double)6.66838992787495145e-05;
              }
            } else {
              sum += (double)-1.029372549340223419e-05;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)2.000306975096463895e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002987241089293682871;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
            sum += (double)-0.0001632699401084894127;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
              sum += (double)0.000170093644538913709;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
                sum += (double)-0.000205297226042392252;
              } else {
                sum += (double)-1.670871754628790027e-05;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02903912287516625598) ) ) {
      sum += (double)-4.476958383169952241e-05;
    } else {
      sum += (double)0.0001143451393522226632;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1969716199204754326) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01358228213017845069) ) ) {
            sum += (double)8.563894245430435858e-05;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1459647687609034739) ) ) {
              sum += (double)-0.0002427596694529604311;
            } else {
              sum += (double)-2.663696842636306851e-05;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.02076537995319455501) ) ) {
            sum += (double)8.192804558324366052e-05;
          } else {
            sum += (double)-1.521761308688479286e-05;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01786796629190690391) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4756525355205591388) ) ) {
              sum += (double)5.213005464350242766e-05;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01750510838567600341) ) ) {
                sum += (double)-1.473341411618059103e-05;
              } else {
                sum += (double)-0.0002473587688058614606;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4595373221702413469) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.536815244488509258) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02184468199994800408) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
                    sum += (double)2.524809250850916343e-05;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)2.33127461073129405) ) ) {
                      sum += (double)0.0001051365063809182399;
                    } else {
                      sum += (double)0.0003970402694176300581;
                    }
                  }
                } else {
                  sum += (double)-1.019723902037224308e-05;
                }
              } else {
                sum += (double)9.9604792284346301e-05;
              }
            } else {
              sum += (double)0.0002584102548037965933;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7926895608503349289) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01365999260533240153) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01268053991330720179) ) ) {
                sum += (double)-2.679796491440302199e-05;
              } else {
                sum += (double)-0.0001466145962410874976;
              }
            } else {
              sum += (double)3.218223448307889583e-06;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8015490832600030702) ) ) {
              sum += (double)0.0002030770628032489505;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.047081057724363218) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5506241236438244036) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1334099412632789583) ) ) {
                    sum += (double)-0.0002146960976533591732;
                  } else {
                    sum += (double)0.000125411206933980201;
                  }
                } else {
                  sum += (double)-0.000214769778540677066;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.558918444603463405) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8406289760072206407) ) ) {
                    sum += (double)0.0004619833881345888254;
                  } else {
                    sum += (double)0.0001409444017985532482;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8048720285102878291) ) ) {
                    sum += (double)-0.0002203047991730272851;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.067506404023069955) ) ) {
                      sum += (double)-1.385893987988661132e-05;
                    } else {
                      sum += (double)7.249961936816130337e-05;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.980304400868979943e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002957368721065388429;
        } else {
          sum += (double)-7.04740287371598853e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      sum += (double)-4.311302336010033827e-05;
    } else {
      sum += (double)0.0001434248582967980422;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1969716199204754326) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01733767392510030328) ) ) {
            sum += (double)1.913517539792541377e-05;
          } else {
            sum += (double)-0.0001982068783230844355;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.02076537995319455501) ) ) {
            sum += (double)8.110876035346997509e-05;
          } else {
            sum += (double)-1.506543214350205255e-05;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01786796629190690391) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4756525355205591388) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4529088438083754276) ) ) {
                sum += (double)3.826594120665170675e-05;
              } else {
                sum += (double)0.000280757125102631456;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01750510838567600341) ) ) {
                sum += (double)-1.458608578050690991e-05;
              } else {
                sum += (double)-0.0002448851812863722232;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3700672663534202989) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.536815244488509258) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3359659609963293603) ) ) {
                  sum += (double)2.066413005296554919e-05;
                } else {
                  sum += (double)-0.0001131455351487207085;
                }
              } else {
                sum += (double)9.007194644270045513e-05;
              }
            } else {
              sum += (double)0.0001082545347280496783;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6585108367119031358) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6243164039142820032) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)6.508579178600560233) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6019521188782922527) ) ) {
                  sum += (double)-3.97425666094667227e-05;
                } else {
                  sum += (double)6.341860730390181007e-05;
                }
              } else {
                sum += (double)5.779401605043043725e-05;
              }
            } else {
              sum += (double)-7.917156062703298834e-05;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5239561240717546253) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02656204255649715143) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9159152517183267728) ) ) {
                  sum += (double)4.404715566984090285e-05;
                } else {
                  sum += (double)-0.0001648001964204013411;
                }
              } else {
                sum += (double)0.000135831494325977471;
              }
            } else {
              sum += (double)-1.024715410938370019e-05;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.960501301135601662e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002927794952788767861;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
            sum += (double)-0.0001609324862298646362;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
              sum += (double)0.0001690974437830543016;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2040291793891025884) ) ) {
                  sum += (double)-7.154746043563979486e-05;
                } else {
                  sum += (double)-0.0003943493029510136694;
                }
              } else {
                sum += (double)-1.583689717798526382e-05;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02903912287516625598) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.20767304701227568) ) ) {
          sum += (double)-4.642537008599276584e-05;
        } else {
          sum += (double)0.0001662082842505565965;
        }
      } else {
        sum += (double)-6.065077702362438842e-05;
      }
    } else {
      sum += (double)0.0001123174862601818212;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1969716199204754326) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01358228213017845069) ) ) {
            sum += (double)8.459120612027808952e-05;
          } else {
            sum += (double)-0.0001669647319492639716;
          }
        } else {
          sum += (double)-4.366257275669827876e-06;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01786796629190690391) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01350718992917560209) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3054218362718867374) ) ) {
                sum += (double)0.0001419400194122101338;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01234409799962950249) ) ) {
                    sum += (double)1.254329058017743642e-05;
                  } else {
                    sum += (double)0.0002773730658615629232;
                  }
                } else {
                  sum += (double)-0.0001032595152895326909;
                }
              }
            } else {
              sum += (double)-2.416548869559147409e-05;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4595373221702413469) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.536815244488509258) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02184468199994800408) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02151867742099905154) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
                      sum += (double)-7.321350379422509776e-06;
                    } else {
                      sum += (double)0.0001939014355743625881;
                    }
                  } else {
                    sum += (double)0.0003554265453623464775;
                  }
                } else {
                  sum += (double)-1.040083710566079395e-05;
                }
              } else {
                sum += (double)9.764182829556189522e-05;
              }
            } else {
              sum += (double)0.0002547436074486800445;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7926895608503349289) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01365999260533240153) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01268053991330720179) ) ) {
                sum += (double)-2.646975153071089989e-05;
              } else {
                sum += (double)-0.0001451546890787732758;
              }
            } else {
              sum += (double)3.187420175248780554e-06;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8015490832600030702) ) ) {
              sum += (double)0.0002007042651619905446;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.047081057724363218) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5506241236438244036) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1334099412632789583) ) ) {
                    sum += (double)-0.0002131731801200658217;
                  } else {
                    sum += (double)0.0001237399224450604833;
                  }
                } else {
                  sum += (double)-0.0002125196046197966825;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.558918444603463405) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8406289760072206407) ) ) {
                    sum += (double)0.0004570683586921188489;
                  } else {
                    sum += (double)0.0001391743183634135594;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8048720285102878291) ) ) {
                    sum += (double)-0.0002183917512185871632;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.067506404023069955) ) ) {
                      sum += (double)-1.387823072595808058e-05;
                    } else {
                      sum += (double)7.153275881879095691e-05;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.940895922016352553e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002898517110372414961;
        } else {
          sum += (double)-6.907158982589449577e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      sum += (double)-4.226513388184842038e-05;
    } else {
      sum += (double)0.0001408674322407353966;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1969716199204754326) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01733767392510030328) ) ) {
            sum += (double)1.918673054871163208e-05;
          } else {
            sum += (double)-0.0001945551666678070613;
          }
        } else {
          sum += (double)-4.322596007237855681e-06;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01786796629190690391) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4756525355205591388) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4529088438083754276) ) ) {
                sum += (double)3.753399413596261199e-05;
              } else {
                sum += (double)0.00027746114292708429;
              }
            } else {
              sum += (double)-2.580240386974295803e-05;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4595373221702413469) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.536815244488509258) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02184468199994800408) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02151867742099905154) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
                      sum += (double)-7.248137721975593956e-06;
                    } else {
                      sum += (double)0.0001919624216765548961;
                    }
                  } else {
                    sum += (double)0.0003518722725745577411;
                  }
                } else {
                  sum += (double)-1.02968311274389911e-05;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)6.860143736822311489) ) ) {
                  sum += (double)0.0001316880963915564157;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.270180086289437682) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.0269991884417598027) ) ) {
                      sum += (double)-3.736618148174048452e-05;
                    } else {
                      sum += (double)0.0001629241456385648208;
                    }
                  } else {
                    sum += (double)0.0002774410780208806247;
                  }
                }
              }
            } else {
              sum += (double)0.0002521961725627382372;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6585108367119031358) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6243164039142820032) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)5.949758960524891727) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6019521188782922527) ) ) {
                  sum += (double)-4.471849360929914716e-05;
                } else {
                  sum += (double)7.092997887362749822e-05;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02816721160318755302) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4529088438083754276) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3601824321924683159) ) ) {
                      sum += (double)-5.059557670999008223e-06;
                    } else {
                      sum += (double)-0.000241251806969861103;
                    }
                  } else {
                    sum += (double)9.890913600732650619e-05;
                  }
                } else {
                  sum += (double)0.0002315683385549003443;
                }
              }
            } else {
              sum += (double)-7.831448658247225413e-05;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5239561240717546253) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01192174046900940261) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01144422169027970067) ) ) {
                  sum += (double)1.94602868868969392e-05;
                } else {
                  sum += (double)-0.0003081852768513339497;
                }
              } else {
                sum += (double)6.494607841036957152e-05;
              }
            } else {
              sum += (double)-1.019959716079028895e-05;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.921487200306728387e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.00028695319061847153;
        } else {
          sum += (double)-6.838087975682521609e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02903912287516625598) ) ) {
      sum += (double)-4.302919259770447198e-05;
    } else {
      sum += (double)0.0001103256412972815527;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
        sum += (double)-7.846818719437418635e-05;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1969716199204754326) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01358228213017845069) ) ) {
              sum += (double)6.197257125879534947e-05;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1459647687609034739) ) ) {
                sum += (double)-0.0002333277392310528059;
              } else {
                sum += (double)-2.177585157305868556e-05;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.716810860265206351) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1241875207858965241) ) ) {
                sum += (double)0.0002348026938597557226;
              } else {
                sum += (double)-3.028462773987224959e-05;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.02076537995319455501) ) ) {
                sum += (double)8.0083212237397252e-05;
              } else {
                sum += (double)-2.340111960967615904e-05;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01453835969900455112) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3054218362718867374) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01035788816953125101) ) ) {
                  sum += (double)-5.829647050372191962e-05;
                } else {
                  sum += (double)0.0001976306067126290468;
                }
              } else {
                sum += (double)-0.0001157771902439042478;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8754380250063158453) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7296813692868641121) ) ) {
                  sum += (double)-1.337289324593843316e-05;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7527246299952811137) ) ) {
                    sum += (double)-0.000354545166968212803;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)6.266642075407699686) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4126821382315902231) ) ) {
                        sum += (double)-0.0002056782620677136044;
                      } else {
                        sum += (double)-1.059862649223456758e-07;
                      }
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.139959655814863915) ) ) {
                        sum += (double)-0.000406404299661517138;
                      } else {
                        sum += (double)-0.0001019815289780396869;
                      }
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01324617126008970254) ) ) {
                  sum += (double)0.000193130687377497277;
                } else {
                  sum += (double)-0.0001470601861365139625;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06143668909582125637) ) ) {
              sum += (double)9.063647712537203915e-05;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07462212179840606308) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)3.421131696936638544) ) ) {
                  sum += (double)-0.0003771486461830690228;
                } else {
                  sum += (double)2.275799772178288644e-05;
                }
              } else {
                sum += (double)2.87457779125345833e-05;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.902272109374670038e-05;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
          sum += (double)-0.0001830194163092647075;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            sum += (double)0.0001440791359732429468;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2040291793891025884) ) ) {
                sum += (double)-6.017567075711364918e-05;
              } else {
                sum += (double)-0.0003674388038780307527;
              }
            } else {
              sum += (double)-3.270778979255385693e-05;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      sum += (double)-4.143393719424944683e-05;
    } else {
      sum += (double)0.0001383554946461861793;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
        sum += (double)-7.768350413605540588e-05;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1969716199204754326) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01358228213017845069) ) ) {
              sum += (double)6.135284218342147602e-05;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1459647687609034739) ) ) {
                sum += (double)-0.0002309944579610601241;
              } else {
                sum += (double)-2.155809479137492702e-05;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.716810860265206351) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1241875207858965241) ) ) {
                sum += (double)0.0002324546642781218694;
              } else {
                sum += (double)-2.998176908918789713e-05;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.02076537995319455501) ) ) {
                sum += (double)7.928237651243644007e-05;
              } else {
                sum += (double)-2.316710042652827257e-05;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01453835969900455112) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3054218362718867374) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                sum += (double)0.0001601828114672874405;
              } else {
                sum += (double)-0.0001146194121358379438;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8754380250063158453) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7296813692868641121) ) ) {
                  sum += (double)-1.32391649524140307e-05;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7527246299952811137) ) ) {
                    sum += (double)-0.0003509997104022962388;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)6.266642075407699686) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4126821382315902231) ) ) {
                        sum += (double)-0.0002036214774584789704;
                      } else {
                        sum += (double)-1.049257368625452088e-07;
                      }
                    } else {
                      sum += (double)-0.0002067085694554343591;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01324617126008970254) ) ) {
                  sum += (double)0.0001911993792460283499;
                } else {
                  sum += (double)-0.0001455895795952528732;
                }
              }
            }
          } else {
            sum += (double)3.053065429505672038e-05;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.883248935919255065e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002830766022954186154;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
            sum += (double)-0.0001561184422384980582;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
              sum += (double)0.0001673402078352713527;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2040291793891025884) ) ) {
                  sum += (double)-6.885569509993330465e-05;
                } else {
                  sum += (double)-0.0003853568982984662667;
                }
              } else {
                sum += (double)-1.3976927039013923e-05;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02903912287516625598) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.20767304701227568) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01332033324665085096) ) ) {
            sum += (double)-0.000204509244831569965;
          } else {
            sum += (double)-7.227950496106018958e-06;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2314317718092156195) ) ) {
            sum += (double)0.0003630617580903858482;
          } else {
            sum += (double)5.936202861087781199e-05;
          }
        }
      } else {
        sum += (double)-5.877699787354261361e-05;
      }
    } else {
      sum += (double)0.0001083689722089240193;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01358228213017845069) ) ) {
              sum += (double)5.924843977062175284e-05;
            } else {
              sum += (double)-0.0001398514363228677557;
            }
          } else {
            sum += (double)7.244491298240422929e-06;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4498947908842932386) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.382668785262347988) ) ) {
              sum += (double)5.513470716021015453e-05;
            } else {
              sum += (double)0.0001411004326395452703;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6665311812318160944) ) ) {
              sum += (double)-2.102959049623738484e-05;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01382766296952895289) ) ) {
                sum += (double)-2.138601166589069427e-05;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01968587977366425407) ) ) {
                  sum += (double)0.0001196333141150465935;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02656204255649715143) ) ) {
                    sum += (double)-3.325836836740229496e-06;
                  } else {
                    sum += (double)0.000125774742076837986;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001354300337896513029;
        } else {
          sum += (double)1.383572510117837946e-06;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.864416625550283034e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.000280245833887051625;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
            sum += (double)-0.0001545572642286398811;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
              sum += (double)0.000165666805783985159;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2040291793891025884) ) ) {
                  sum += (double)-6.81671473089741955e-05;
                } else {
                  sum += (double)-0.0003815033245336962994;
                }
              } else {
                sum += (double)-1.383715473286684585e-05;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
        sum += (double)2.355755858624089267e-05;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6154185483379717159) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01389697382890710091) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6632242271807050615) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4997329919198176262) ) ) {
                sum += (double)-0.0003156298837870701621;
              } else {
                sum += (double)-3.55503973762758769e-05;
              }
            } else {
              sum += (double)-6.394755031744187425e-05;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5435706871979388843) ) ) {
              sum += (double)-2.879522639131656644e-05;
            } else {
              sum += (double)-0.0001763523606547427053;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6431655236084353744) ) ) {
            sum += (double)0.0002005959212344706789;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.03832795960345160985) ) ) {
                sum += (double)-0.0002403089190400870651;
              } else {
                sum += (double)0.0001296674339349880708;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7376757158539138937) ) ) {
                sum += (double)-0.0001061896449584723263;
              } else {
                sum += (double)1.181537388323635333e-05;
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.0001358882407657802213;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01358228213017845069) ) ) {
              sum += (double)5.865594927364817224e-05;
            } else {
              sum += (double)-0.0001384529184491394775;
            }
          } else {
            sum += (double)7.172045163088751834e-06;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4498947908842932386) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.382668785262347988) ) ) {
              sum += (double)5.458336058176284204e-05;
            } else {
              sum += (double)0.0001396894290463682002;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6665311812318160944) ) ) {
              sum += (double)-2.081929520937777136e-05;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01382766296952895289) ) ) {
                sum += (double)-2.117215264006518222e-05;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01968587977366425407) ) ) {
                  sum += (double)0.0001184369796079646407;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02656204255649715143) ) ) {
                    sum += (double)-3.292583314899330738e-06;
                  } else {
                    sum += (double)0.0001245169967849039374;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001340757298881230513;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9939320033424431378) ) ) {
            sum += (double)-8.083241407188450564e-07;
          } else {
            sum += (double)0.0001398866110799932292;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.845772471611520981e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002774433729614798352;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
            sum += (double)-0.000153011691023026956;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
              sum += (double)0.000164010122845259813;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2040291793891025884) ) ) {
                  sum += (double)-6.748547579130589869e-05;
                } else {
                  sum += (double)-0.0003776882816496903795;
                }
              } else {
                sum += (double)-1.369878329114726566e-05;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
        sum += (double)2.332197893275438013e-05;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6154185483379717159) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01389697382890710091) ) ) {
            sum += (double)-0.0001917160568913592778;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5435706871979388843) ) ) {
              sum += (double)-2.850727190550168136e-05;
            } else {
              sum += (double)-0.0001745888365244768206;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6431655236084353744) ) ) {
            sum += (double)0.0001985899574356153737;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.03832795960345160985) ) ) {
                sum += (double)-0.0002379058320574196342;
              } else {
                sum += (double)0.0001283707526056414284;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7376757158539138937) ) ) {
                sum += (double)-0.0001051277441452146442;
              } else {
                sum += (double)1.169721375177526047e-05;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.173477760651207902) ) ) {
        sum += (double)9.670470420631670425e-06;
      } else {
        sum += (double)0.0002958054610644467175;
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
        sum += (double)-7.581513169709109027e-05;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1969716199204754326) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01358228213017845069) ) ) {
              sum += (double)5.958901760297724391e-05;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1459647687609034739) ) ) {
                sum += (double)-0.0002261483452159417876;
              } else {
                sum += (double)-1.883176580439646552e-05;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.716810860265206351) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1241875207858965241) ) ) {
                sum += (double)0.000230066096818630115;
              } else {
                sum += (double)-2.977140753396919734e-05;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.02076537995319455501) ) ) {
                sum += (double)7.84209950735289445e-05;
              } else {
                sum += (double)-2.301416657346562291e-05;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01453835969900455112) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3054218362718867374) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01035788816953125101) ) ) {
                  sum += (double)-5.992886410760027882e-05;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2383811426128441269) ) ) {
                    sum += (double)7.867566792777291992e-05;
                  } else {
                    sum += (double)0.0002759295426464329496;
                  }
                }
              } else {
                sum += (double)-0.0001139328897914896677;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8754380250063158453) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7296813692868641121) ) ) {
                  sum += (double)-1.326878031887471047e-05;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7527246299952811137) ) ) {
                    sum += (double)-0.0003474954592335658538;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)6.266642075407699686) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4126821382315902231) ) ) {
                        sum += (double)-0.0002015910208176233294;
                      } else {
                        sum += (double)-1.377682065746436415e-07;
                      }
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.139959655814863915) ) ) {
                        sum += (double)-0.0004003492719493806427;
                      } else {
                        sum += (double)-9.893840521800558753e-05;
                      }
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01324617126008970254) ) ) {
                  sum += (double)0.000189538921184609089;
                } else {
                  sum += (double)-0.0001449763225391507179;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06143668909582125637) ) ) {
              sum += (double)8.883454302576864869e-05;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07462212179840606308) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)3.421131696936638544) ) ) {
                  sum += (double)-0.0003738677527492299227;
                } else {
                  sum += (double)2.190117411969524748e-05;
                }
              } else {
                sum += (double)2.773729648509483574e-05;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.827314928273803278e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002746689390855986106;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
            sum += (double)-0.0001514815715702036241;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
              sum += (double)0.0001623700235892707876;
            } else {
              sum += (double)-5.488499220641351851e-05;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02903912287516625598) ) ) {
      sum += (double)-4.095237869919676765e-05;
    } else {
      sum += (double)0.0001055754926234770227;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01358228213017845069) ) ) {
              sum += (double)5.753315247905751024e-05;
            } else {
              sum += (double)-0.0001357548046441222755;
            }
          } else {
            sum += (double)7.1259973999333774e-06;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4498947908842932386) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.382668785262347988) ) ) {
              sum += (double)5.370618085769036611e-05;
            } else {
              sum += (double)0.0001380017602660178202;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6665311812318160944) ) ) {
              sum += (double)-2.078825480328228912e-05;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01382766296952895289) ) ) {
                sum += (double)-2.11339948720706193e-05;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01968587977366425407) ) ) {
                  sum += (double)0.0001170067960316719053;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02656204255649715143) ) ) {
                    sum += (double)-3.544988600823467735e-06;
                  } else {
                    sum += (double)0.0001229574209820593613;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001319768209147944595;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9939320033424431378) ) ) {
            sum += (double)-9.099241663653660296e-07;
          } else {
            sum += (double)0.0001384607100708148898;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.809041643448706062e-05;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
          sum += (double)-0.0001746308133673354522;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            sum += (double)0.0001371537222439656088;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2633386825073772974) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1763179218778453128) ) ) {
                sum += (double)-2.31790207931959677e-05;
              } else {
                sum += (double)-0.0004038195416796952703;
              }
            } else {
              sum += (double)-3.500626061156838717e-05;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
        sum += (double)2.344775471132818962e-05;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6154185483379717159) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01389697382890710091) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6632242271807050615) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4997329919198176262) ) ) {
                sum += (double)-0.0003101469008064689902;
              } else {
                sum += (double)-3.286821058612655763e-05;
              }
            } else {
              sum += (double)-6.098139392931691206e-05;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5435706871979388843) ) ) {
              sum += (double)-2.782819922824767409e-05;
            } else {
              sum += (double)-0.0001724733899225777331;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6431655236084353744) ) ) {
            sum += (double)0.0001970135850411758836;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.03832795960345160985) ) ) {
                sum += (double)-0.0002351695853784414099;
              } else {
                sum += (double)0.0001274860300761882089;
              }
            } else {
              sum += (double)-6.12854298264011902e-05;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.173477760651207902) ) ) {
        sum += (double)8.518009356433344669e-06;
      } else {
        sum += (double)0.0002917916437339348221;
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01358228213017845069) ) ) {
              sum += (double)5.695781885431363043e-05;
            } else {
              sum += (double)-0.0001343972593784076351;
            }
          } else {
            sum += (double)7.054742780042989621e-06;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.453524205219939025) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.382668785262347988) ) ) {
              sum += (double)5.274487405530629055e-05;
            } else {
              sum += (double)0.0001361969846534100451;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6665311812318160944) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.816221039472407206) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.66447921390212894) ) ) {
                  sum += (double)-1.995032576810687407e-05;
                } else {
                  sum += (double)0.0002180477962247096132;
                }
              } else {
                sum += (double)-0.00017943096169822871;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01382766296952895289) ) ) {
                sum += (double)-2.092265831888653286e-05;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01968587977366425407) ) ) {
                  sum += (double)0.0001158367242853748603;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02656204255649715143) ) ) {
                    sum += (double)-3.509541679240825146e-06;
                  } else {
                    sum += (double)0.0001217278473161380244;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001306570574855537854;
        } else {
          sum += (double)1.235155763244876153e-06;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.790951132508261082e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.000270992040011175969;
        } else {
          sum += (double)-6.34383581512917166e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02903912287516625598) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.20767304701227568) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01332033324665085096) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5704248485475517105) ) ) {
              sum += (double)-0.0004119499299364785122;
            } else {
              sum += (double)-1.258474838002310847e-05;
            }
          } else {
            sum += (double)-6.651487760608265622e-06;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2314317718092156195) ) ) {
            sum += (double)0.0003587867268908988077;
          } else {
            sum += (double)5.843391945947789607e-05;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2040291793891025884) ) ) {
          sum += (double)1.510524183594256138e-05;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6089944401946038033) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7719890388971448747) ) ) {
                  sum += (double)-0.0002570294814373932967;
                } else {
                  sum += (double)3.58149123181087471e-05;
                }
              } else {
                sum += (double)-5.562190697444301292e-05;
              }
            } else {
              sum += (double)-0.0003510602335944505758;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01904528850581000202) ) ) {
              sum += (double)2.036300173815374056e-05;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02038190166640845361) ) ) {
                sum += (double)-0.0002659745234632282605;
              } else {
                sum += (double)-5.45808193728340569e-05;
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.0001037012800896683525;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01358228213017845069) ) ) {
              sum += (double)5.638824489254217452e-05;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1421750123073113881) ) ) {
                sum += (double)-0.0002120074150907630905;
              } else {
                sum += (double)-3.055143398804623052e-05;
              }
            }
          } else {
            sum += (double)6.984191396256000146e-06;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.453524205219939025) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.382668785262347988) ) ) {
              sum += (double)5.221742332053965136e-05;
            } else {
              sum += (double)0.0001348350145032300572;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6665311812318160944) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.816221039472407206) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.66447921390212894) ) ) {
                  sum += (double)-1.975082289527025137e-05;
                } else {
                  sum += (double)0.0002158673121011816078;
                }
              } else {
                sum += (double)-0.0001776366588269728537;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01382766296952895289) ) ) {
                sum += (double)-2.071342766721499926e-05;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01968587977366425407) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3601824321924683159) ) ) {
                    sum += (double)0.0001458221357252607701;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)2.583741071669872547) ) ) {
                      sum += (double)0.0002965189997390236718;
                    } else {
                      sum += (double)-0.0001034900369579970335;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02656204255649715143) ) ) {
                    sum += (double)-3.474447016696085338e-06;
                  } else {
                    sum += (double)0.0001205105686030801302;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001293504852153339762;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9939320033424431378) ) ) {
            sum += (double)-9.131788315476272051e-07;
          } else {
            sum += (double)0.0001370637529435682106;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.773041991982609222e-05;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
          sum += (double)-0.0001720813792142108492;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            sum += (double)0.0001365462854300858475;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2633386825073772974) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1763179218778453128) ) ) {
                sum += (double)-2.224589574853457874e-05;
              } else {
                sum += (double)-0.0003989245917182415615;
              }
            } else {
              sum += (double)-3.385608784541020195e-05;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
        sum += (double)2.308875148973411543e-05;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6154185483379717159) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01389697382890710091) ) ) {
            sum += (double)-0.0001861495932808327554;
          } else {
            sum += (double)-5.429895236618942442e-05;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6431655236084353744) ) ) {
            sum += (double)0.0001952416422832554672;
          } else {
            sum += (double)-2.49033102303303218e-05;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.173477760651207902) ) ) {
        sum += (double)7.395818679323119439e-06;
      } else {
        sum += (double)0.0002878367194595436176;
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
        sum += (double)-7.347949222887954236e-05;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1969716199204754326) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.716810860265206351) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5139380427591212497) ) ) {
              sum += (double)1.296279404778033663e-05;
            } else {
              sum += (double)0.0002496128879138268496;
            }
          } else {
            sum += (double)-2.175060768015539209e-05;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01453835969900455112) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3054218362718867374) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                sum += (double)0.0001553338943126921911;
              } else {
                sum += (double)-0.0001134531646749888681;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8754380250063158453) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7296813692868641121) ) ) {
                  sum += (double)-1.336302385177771433e-05;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7527246299952811137) ) ) {
                    sum += (double)-0.000344014628014216819;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)6.266642075407699686) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4126821382315902231) ) ) {
                        sum += (double)-0.0001995692312668420751;
                      } else {
                        sum += (double)-1.859791188811262667e-07;
                      }
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.139959655814863915) ) ) {
                        sum += (double)-0.0003964785728603601898;
                      } else {
                        sum += (double)-9.801809827016817582e-05;
                      }
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01324617126008970254) ) ) {
                  sum += (double)0.0001880203212791106075;
                } else {
                  sum += (double)-0.0001446441537700593547;
                }
              }
            }
          } else {
            sum += (double)2.888075306392661783e-05;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.75531177947829876e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002673692235760894396;
        } else {
          sum += (double)-6.2027099059212731e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7719890388971448747) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
        sum += (double)2.503443195043272249e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01508468591631305193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5135288428897961666) ) ) {
              sum += (double)-0.0002734447761017474499;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2383811426128441269) ) ) {
                sum += (double)9.235023458521547852e-05;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                  sum += (double)-7.587265890712540284e-05;
                } else {
                  sum += (double)-0.0003968316020473139621;
                }
              }
            }
          } else {
            sum += (double)-9.438563529237390179e-06;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.795846249543709305) ) ) {
            sum += (double)-5.54547260309083955e-05;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02317877413482440432) ) ) {
              sum += (double)-3.850068006075310693e-05;
            } else {
              sum += (double)0.0001850267755798995657;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7919955348350430357) ) ) {
        sum += (double)0.000266788354557421462;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.03347941303341895464) ) ) {
            sum += (double)-0.000235477534034067668;
          } else {
            sum += (double)0.0001733417389914393371;
          }
        } else {
          sum += (double)-4.366508445464517091e-05;
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            sum += (double)-8.860211275682291121e-05;
          } else {
            sum += (double)6.988989487859109098e-06;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4498947908842932386) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.382668785262347988) ) ) {
              sum += (double)5.183696635828168118e-05;
            } else {
              sum += (double)0.0001336426164018624462;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6665311812318160944) ) ) {
              sum += (double)-2.035063625517439766e-05;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01192174046900940261) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01152614573836060162) ) ) {
                  sum += (double)1.864500931696966269e-05;
                } else {
                  sum += (double)-0.0003323513378078738942;
                }
              } else {
                sum += (double)5.946753165188442097e-05;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001273221861100120569;
        } else {
          sum += (double)1.11646067802605442e-06;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
        sum += (double)-0.0001217391684948434654;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          sum += (double)0.0001459502983925631237;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1961081311872297228) ) ) {
              sum += (double)-3.002571496556181611e-05;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2488259315871576283) ) ) {
                sum += (double)-0.000450295130256563481;
              } else {
                sum += (double)-0.0001155227337666373314;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.164258817846220095) ) ) {
              sum += (double)-0.000153829021359025138;
            } else {
              sum += (double)1.411537373409808155e-05;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02903912287516625598) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.20767304701227568) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01332033324665085096) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5704248485475517105) ) ) {
              sum += (double)-0.0004042499163188040083;
            } else {
              sum += (double)-1.295899119748569724e-05;
            }
          } else {
            sum += (double)-6.214341467703546115e-06;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2314317718092156195) ) ) {
            sum += (double)0.0003552011546836344211;
          } else {
            sum += (double)5.810632283100858466e-05;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2040291793891025884) ) ) {
          sum += (double)1.507544941868130165e-05;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6089944401946038033) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7719890388971448747) ) ) {
                  sum += (double)-0.0002509969885851983697;
                } else {
                  sum += (double)3.590364283389555552e-05;
                }
              } else {
                sum += (double)-5.440595687219907555e-05;
              }
            } else {
              sum += (double)-0.0003460550222163354941;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01904528850581000202) ) ) {
              sum += (double)2.093280124485518182e-05;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02038190166640845361) ) ) {
                sum += (double)-0.0002624465835469891599;
              } else {
                sum += (double)-5.339073684767152412e-05;
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.0001018050633585796863;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            sum += (double)-8.771609041072866606e-05;
          } else {
            sum += (double)6.919100223865785436e-06;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.453524205219939025) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.382668785262347988) ) ) {
              sum += (double)5.091804974567375598e-05;
            } else {
              sum += (double)0.0001319023681954612198;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6665311812318160944) ) ) {
              sum += (double)-2.178650823574899907e-05;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01382766296952895289) ) ) {
                sum += (double)-2.069726095069199885e-05;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01968587977366425407) ) ) {
                  sum += (double)0.0001127474851674332702;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02656204255649715143) ) ) {
                    sum += (double)-4.294458034395371419e-06;
                  } else {
                    sum += (double)0.0001184493480038575192;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001260489639786431895;
        } else {
          sum += (double)1.105296363649056856e-06;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.788810230126338286e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002640258819745803175;
        } else {
          sum += (double)-6.089865750453265689e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7719890388971448747) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6700686045374256716) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.560167446845740713) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09284629329452671886) ) ) {
              sum += (double)5.374421564727483683e-05;
            } else {
              sum += (double)0.0002773349107608098253;
            }
          } else {
            sum += (double)-8.747600759046949984e-05;
          }
        } else {
          sum += (double)-6.873026435468567146e-05;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01508468591631305193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5135288428897961666) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.67383329584012408) ) ) {
                sum += (double)-8.350609391927719114e-05;
              } else {
                sum += (double)-0.0003263068981250398363;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2383811426128441269) ) ) {
                sum += (double)9.124870398539184984e-05;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                  sum += (double)-7.284968004872401863e-05;
                } else {
                  sum += (double)-0.0003904028958762258855;
                }
              }
            }
          } else {
            sum += (double)-9.545813275811572892e-06;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.795846249543709305) ) ) {
            sum += (double)-5.464722627047353612e-05;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02317877413482440432) ) ) {
              sum += (double)-3.785666990645077855e-05;
            } else {
              sum += (double)0.0001834612094721388778;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7919955348350430357) ) ) {
        sum += (double)0.0002642120131187968989;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.03347941303341895464) ) ) {
            sum += (double)-0.0002331474212752211782;
          } else {
            sum += (double)0.0001710940654346242975;
          }
        } else {
          sum += (double)-4.285833914404577516e-05;
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
        sum += (double)-7.171854247755206238e-05;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1969716199204754326) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.716810860265206351) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5139380427591212497) ) ) {
              sum += (double)1.288518010793874697e-05;
            } else {
              sum += (double)0.0002472380241379141543;
            }
          } else {
            sum += (double)-2.141961238155883909e-05;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9939320033424431378) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01852606919889980205) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7296813692868641121) ) ) {
                sum += (double)1.76123405335328772e-05;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2468464866499842369) ) ) {
                  sum += (double)0.0001106507706646926855;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7527246299952811137) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01389697382890710091) ) ) {
                      sum += (double)-0.0004539040272886103191;
                    } else {
                      sum += (double)-4.171996156011508535e-05;
                    }
                  } else {
                    sum += (double)-5.089126755522110636e-05;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3700672663534202989) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.536815244488509258) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3359659609963293603) ) ) {
                      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02886379609504645394) ) ) {
                        sum += (double)2.959793835379279794e-05;
                      } else {
                        sum += (double)-0.0001770500810355236899;
                      }
                    } else {
                      sum += (double)-0.0001196868246171466397;
                    }
                  } else {
                    sum += (double)8.888767412668419402e-05;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.507273484268380592) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02431407355560485581) ) ) {
                      sum += (double)0.0001675535348952577794;
                    } else {
                      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2633386825073772974) ) ) {
                        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02693796897738510304) ) ) {
                          sum += (double)-0.0002719121042189892546;
                        } else {
                          sum += (double)2.582958714779594846e-05;
                        }
                      } else {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.643011354920123956) ) ) {
                          sum += (double)4.736228727591063178e-05;
                        } else {
                          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)6.167340579785650867) ) ) {
                            sum += (double)0.0003665141272799563987;
                          } else {
                            sum += (double)6.635702610947191325e-05;
                          }
                        }
                      }
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4312401941550234041) ) ) {
                      sum += (double)0.0001098663451150059715;
                    } else {
                      sum += (double)-0.0002278092940105125373;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.906270065068071951) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)5.910319322561453426) ) ) {
                    sum += (double)4.868499909692761612e-06;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05737306300915100826) ) ) {
                      sum += (double)0.0002371022528907480503;
                    } else {
                      sum += (double)5.508228567099673098e-05;
                    }
                  }
                } else {
                  sum += (double)-0.0001095447248270258671;
                }
              }
            }
          } else {
            sum += (double)0.0002057735311871849461;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
        sum += (double)-0.0001200269847431209417;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          sum += (double)0.0001449382164234217733;
        } else {
          sum += (double)-4.458592400945679264e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      sum += (double)-3.72154816535162606e-05;
    } else {
      sum += (double)0.0001273575604639270119;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01358228213017845069) ) ) {
              sum += (double)5.782227190092015099e-05;
            } else {
              sum += (double)-0.0001297846383713754579;
            }
          } else {
            sum += (double)6.924663037210063768e-06;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4570570293251041138) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.382668785262347988) ) ) {
              sum += (double)5.037509189050624946e-05;
            } else {
              sum += (double)0.0001278248409792771172;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6665311812318160944) ) ) {
              sum += (double)-2.306336908175458532e-05;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01192174046900940261) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01152614573836060162) ) ) {
                  sum += (double)1.853407040471211238e-05;
                } else {
                  sum += (double)-0.0003289969640207432433;
                }
              } else {
                sum += (double)5.816233997302333543e-05;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001240712875154382816;
        } else {
          sum += (double)1.022732308058586365e-06;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.821249049888657811e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002608383092966333342;
        } else {
          sum += (double)-5.978359264785964081e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7719890388971448747) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6700686045374256716) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.560167446845740713) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09284629329452671886) ) ) {
              sum += (double)5.355910046014890054e-05;
            } else {
              sum += (double)0.0002748447558150400572;
            }
          } else {
            sum += (double)-8.632313470090073604e-05;
          }
        } else {
          sum += (double)-6.770999782713175129e-05;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01508468591631305193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5135288428897961666) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.67383329584012408) ) ) {
                sum += (double)-8.22988789528608292e-05;
              } else {
                sum += (double)-0.0003226716772478540034;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2383811426128441269) ) ) {
                sum += (double)9.070837167590591304e-05;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                  sum += (double)-7.17490450091039136e-05;
                } else {
                  sum += (double)-0.0003861267120858732135;
                }
              }
            }
          } else {
            sum += (double)-9.078196422761363723e-06;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.795846249543709305) ) ) {
            sum += (double)-5.378898900861204087e-05;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02317877413482440432) ) ) {
              sum += (double)-3.710594914416421545e-05;
            } else {
              sum += (double)0.0001819222113848555534;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7919955348350430357) ) ) {
        sum += (double)0.0002618506192811764647;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.03347941303341895464) ) ) {
            sum += (double)-0.0002305221630792532938;
          } else {
            sum += (double)0.0001696213263731320058;
          }
        } else {
          sum += (double)-4.213269173994061952e-05;
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01358228213017845069) ) ) {
              sum += (double)5.724404553452936984e-05;
            } else {
              sum += (double)-0.0001284867889631738749;
            }
          } else {
            sum += (double)6.855420724961875201e-06;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.453524205219939025) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.382668785262347988) ) ) {
              sum += (double)4.954563246587955557e-05;
            } else {
              sum += (double)0.0001287997484355362819;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6665311812318160944) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.816221039472407206) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.66447921390212894) ) ) {
                  sum += (double)-1.930482865734158075e-05;
                } else {
                  sum += (double)0.0002136960725183598966;
                }
              } else {
                sum += (double)-0.0001749327299618270797;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01382766296952895289) ) ) {
                sum += (double)-2.065620970024610684e-05;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.0156309632167115041) ) ) {
                  sum += (double)0.0001629857064572290187;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8935404120209198275) ) ) {
                    sum += (double)6.439695999684561965e-05;
                  } else {
                    sum += (double)-6.346088483079089101e-05;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001228305750631038403;
        } else {
          sum += (double)1.012505149553166497e-06;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
        sum += (double)-0.0001183419332146409098;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          sum += (double)0.0001439267090124000373;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1961081311872297228) ) ) {
              sum += (double)-2.838700279915848913e-05;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2488259315871576283) ) ) {
                sum += (double)-0.0004442509855143726206;
              } else {
                sum += (double)-0.0001127883439443798586;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.164258817846220095) ) ) {
              sum += (double)-0.0001506761807878132192;
            } else {
              sum += (double)1.545192929383961515e-05;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02903912287516625598) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8851213978465052312) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
          sum += (double)2.089519497011289216e-05;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01389697382890710091) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.472289651438457414) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01283086941649215149) ) ) {
                sum += (double)-0.0001495905191272454862;
              } else {
                sum += (double)-0.0004439983727281977257;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8029103096162454323) ) ) {
                sum += (double)-2.112275766389644786e-05;
              } else {
                sum += (double)-0.0002619508718877720473;
              }
            }
          } else {
            sum += (double)-3.912124129884643708e-05;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1613658750355028149) ) ) {
            sum += (double)2.113915697139288677e-05;
          } else {
            sum += (double)0.0003659420556388795313;
          }
        } else {
          sum += (double)-2.627315304577480825e-05;
        }
      }
    } else {
      sum += (double)9.994683969312180571e-05;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1495216361104711733) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02726246693999815132) ) ) {
            sum += (double)1.080182903562672396e-05;
          } else {
            sum += (double)-0.0002932530187536031008;
          }
        } else {
          sum += (double)-0.0002266983619645341415;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01453835969900455112) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9685277135434785523) ) ) {
            sum += (double)-6.615807954585762342e-06;
          } else {
            sum += (double)-0.0001756379893421136033;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1996668231354973566) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
              sum += (double)-0.0001351396384804199235;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.716810860265206351) ) ) {
                sum += (double)0.0001519307901049260013;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9535212656236063955) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7363026282442169945) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1930007800989422817) ) ) {
                      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02573667030828500138) ) ) {
                        sum += (double)4.786750283776951796e-05;
                      } else {
                        sum += (double)-5.578201342267666193e-05;
                      }
                    } else {
                      sum += (double)-0.000182440686282158538;
                    }
                  } else {
                    sum += (double)-9.98865958400390366e-05;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1082637889236797019) ) ) {
                    sum += (double)0.0003478341545754422802;
                  } else {
                    sum += (double)-5.792529762922120752e-05;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.007110241827282701328) ) ) {
              sum += (double)0.0002033689270158194897;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.536815244488509258) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3941152036552846849) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.21992160151344603) ) ) {
                      sum += (double)0.0001179330093688818205;
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3908071911647953423) ) ) {
                        sum += (double)0.0001596856534791489535;
                      } else {
                        sum += (double)-4.108853892811246088e-05;
                      }
                    }
                  } else {
                    sum += (double)0.0001070603009806007618;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02252608655938285326) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)5.830346509314411563) ) ) {
                      sum += (double)0.0001198769317481726917;
                    } else {
                      sum += (double)1.388853188252856457e-06;
                    }
                  } else {
                    sum += (double)0.0001163139970251646541;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.0156309632167115041) ) ) {
                  sum += (double)0.0001135770166777357986;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.69519940445920414) ) ) {
                    sum += (double)-1.629798275646203125e-05;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5239561240717546253) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8935404120209198275) ) ) {
                        sum += (double)7.862523457827046407e-05;
                      } else {
                        sum += (double)-5.900783489081770736e-05;
                      }
                    } else {
                      sum += (double)-6.548035448699980061e-06;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.852061375975608767e-05;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
          sum += (double)-0.000164436837298629013;
        } else {
          sum += (double)-4.274546140606750607e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      sum += (double)-3.615921806368150253e-05;
    } else {
      sum += (double)0.0001250221497294577786;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            sum += (double)-8.415618702522753819e-05;
          } else {
            sum += (double)6.642937912735813976e-06;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4570570293251041138) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.382668785262347988) ) ) {
              sum += (double)4.906345666468750439e-05;
            } else {
              sum += (double)0.000124909766927885354;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6665311812318160944) ) ) {
              sum += (double)-2.259381734906680097e-05;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01192174046900940261) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01152614573836060162) ) ) {
                  sum += (double)1.864242600277066244e-05;
                } else {
                  sum += (double)-0.0003254342866351916984;
                }
              } else {
                sum += (double)5.657319290457514847e-05;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001209253890667903123;
        } else {
          sum += (double)9.583931088187106991e-07;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.833540795903120766e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002568264613934868228;
        } else {
          sum += (double)-5.795788198972992908e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7719890388971448747) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6700686045374256716) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.560167446845740713) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09284629329452671886) ) ) {
              sum += (double)5.310911135411405614e-05;
            } else {
              sum += (double)0.0002720977298009234226;
            }
          } else {
            sum += (double)-8.546712560512657376e-05;
          }
        } else {
          sum += (double)-6.69562737831646377e-05;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01508468591631305193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5135288428897961666) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.67383329584012408) ) ) {
                sum += (double)-7.953022606670857181e-05;
              } else {
                sum += (double)-0.0003171134899530443879;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2383811426128441269) ) ) {
                sum += (double)9.038696248483445226e-05;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                  sum += (double)-7.045872241724282958e-05;
                } else {
                  sum += (double)-0.0003815951315239848266;
                }
              }
            }
          } else {
            sum += (double)-7.725380628012271182e-06;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.795846249543709305) ) ) {
            sum += (double)-5.262761957383969136e-05;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02317877413482440432) ) ) {
              sum += (double)-3.59820817093535933e-05;
            } else {
              sum += (double)0.0001806837971712094463;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7919955348350430357) ) ) {
        sum += (double)0.0002597594824490241216;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.03347941303341895464) ) ) {
            sum += (double)-0.0002277480764314532367;
          } else {
            sum += (double)0.000167335083499702415;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9443784941828451407) ) ) {
            sum += (double)-6.001701715925932245e-05;
          } else {
            sum += (double)0.0001665409767619249379;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            sum += (double)-8.331462520393816292e-05;
          } else {
            sum += (double)6.576505901870129596e-06;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4498947908842932386) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4275973989307226275) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.25834539873007234) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)3.465051199810287308) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01358228213017845069) ) ) {
                    sum += (double)0.0001872076695719950424;
                  } else {
                    sum += (double)1.695406930640531147e-05;
                  }
                } else {
                  sum += (double)-0.000120526247603051795;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4424888685894248774) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01549985673365740328) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.402027961129499012) ) ) {
                      sum += (double)5.870433599957783691e-05;
                    } else {
                      sum += (double)-0.0002403970848283042074;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02506279512868545348) ) ) {
                      sum += (double)0.0003389326662563689366;
                    } else {
                      sum += (double)9.324614833867937431e-05;
                    }
                  }
                } else {
                  sum += (double)0.000231128839362974999;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.108533247771946506) ) ) {
                sum += (double)0.0003336523699846754751;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02310827241320505612) ) ) {
                  sum += (double)0.0001788483751006424475;
                } else {
                  sum += (double)-0.0001952965210657566723;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.69519940445920414) ) ) {
              sum += (double)-1.570055742707890696e-05;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9005884871890521559) ) ) {
                sum += (double)6.129531911847050144e-05;
              } else {
                sum += (double)-4.315255155907598916e-05;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.000119716137758752502;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9939320033424431378) ) ) {
            sum += (double)-1.145519063926446408e-06;
          } else {
            sum += (double)0.000134140803139624101;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
        sum += (double)-0.0001155801474427183549;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          sum += (double)0.0001431474549705550627;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1961081311872297228) ) ) {
              sum += (double)-2.740175369791149302e-05;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2488259315871576283) ) ) {
                sum += (double)-0.0004389771155547350602;
              } else {
                sum += (double)-0.0001108909991927686491;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.164258817846220095) ) ) {
              sum += (double)-0.0001483441699106368176;
            } else {
              sum += (double)1.606956168816667257e-05;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02903912287516625598) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9711991278023407448) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.20767304701227568) ) ) {
            sum += (double)-4.045413293615287881e-05;
          } else {
            sum += (double)0.0001603927008598231719;
          }
        } else {
          sum += (double)-5.811998632434114081e-05;
        }
      } else {
        sum += (double)0.0001177228226359667608;
      }
    } else {
      sum += (double)9.81487942119248463e-05;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
        sum += (double)-6.834547130666925312e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01453835969900455112) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9685277135434785523) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3054218362718867374) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9177423731409749541) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2383811426128441269) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.858972793756756836) ) ) {
                    sum += (double)-3.255240658689847007e-05;
                  } else {
                    sum += (double)0.0002148974686861038154;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01042844819256645225) ) ) {
                      sum += (double)-4.308787570334970778e-05;
                    } else {
                      sum += (double)0.0002850817476994254489;
                    }
                  } else {
                    sum += (double)-0.000119722793329386955;
                  }
                }
              } else {
                sum += (double)0.0002656316119326471376;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8754380250063158453) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7296813692868641121) ) ) {
                  sum += (double)-1.398342171109048123e-05;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7527246299952811137) ) ) {
                    sum += (double)-0.0003366969599543760162;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)5.870378638489113676) ) ) {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4188781412750021693) ) ) {
                        sum += (double)-0.0002046657035705344671;
                      } else {
                        sum += (double)1.813401904435136831e-05;
                      }
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4595373221702413469) ) ) {
                        sum += (double)-4.582635810947977142e-05;
                      } else {
                        sum += (double)-0.0003497824430197590405;
                      }
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                  sum += (double)0.0001778391407528293435;
                } else {
                  sum += (double)-0.0001143260647077113328;
                }
              }
            }
          } else {
            sum += (double)-0.0001741675812414502896;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1996668231354973566) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.716810860265206351) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02607008868106795371) ) ) {
                sum += (double)0.000192507064759569335;
              } else {
                sum += (double)-9.394985961262137771e-05;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
                sum += (double)-0.000132279339209363789;
              } else {
                sum += (double)-1.261054237153175487e-05;
              }
            }
          } else {
            sum += (double)2.761453916999277486e-05;
          }
        }
      }
    } else {
      sum += (double)-4.779543233695623266e-05;
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7719890388971448747) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
        sum += (double)2.456857846581248485e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01508468591631305193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
            sum += (double)-0.0001907373338844066814;
          } else {
            sum += (double)-7.191260475806440544e-06;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.795846249543709305) ) ) {
            sum += (double)-5.181335254324193426e-05;
          } else {
            sum += (double)6.491983375820816469e-05;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7919955348350430357) ) ) {
        sum += (double)0.0002574767547775991174;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.03347941303341895464) ) ) {
            sum += (double)-0.0002251980513600366335;
          } else {
            sum += (double)0.0001653695938469798999;
          }
        } else {
          sum += (double)-4.021615740540348584e-05;
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01358228213017845069) ) ) {
              sum += (double)5.868397438182280631e-05;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1421750123073113881) ) ) {
                sum += (double)-0.0002012577983299018746;
              } else {
                sum += (double)-2.246567787471831856e-05;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)2.978727805622896518) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.07185582837827406144) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3283578793189833589) ) ) {
                  sum += (double)8.395256122304617038e-05;
                } else {
                  sum += (double)0.0003688644324429333479;
                }
              } else {
                sum += (double)-3.731339590618398321e-07;
              }
            } else {
              sum += (double)-1.981436320097685927e-05;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4570570293251041138) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.382668785262347988) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2345946668168914229) ) ) {
                sum += (double)0.0002527403762391971283;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2546588618151978678) ) ) {
                  sum += (double)-7.656628318751851803e-05;
                } else {
                  sum += (double)5.459626132191953811e-05;
                }
              }
            } else {
              sum += (double)0.0001224494402486016049;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6665311812318160944) ) ) {
              sum += (double)-2.237327327200321552e-05;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01192174046900940261) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01152614573836060162) ) ) {
                  sum += (double)1.775585224095266312e-05;
                } else {
                  sum += (double)-0.0003226393547707370377;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
                  sum += (double)-0.0001482057327424020951;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.385974635655409459) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.164258817846220095) ) ) {
                      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4054471220947490351) ) ) {
                        sum += (double)3.184317252737895267e-05;
                      } else {
                        sum += (double)0.0002702457391656935088;
                      }
                    } else {
                      sum += (double)0.0003425441118172155536;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8897390462544042533) ) ) {
                      sum += (double)5.890052974847350363e-05;
                    } else {
                      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3601824321924683159) ) ) {
                        sum += (double)2.676689240615815046e-05;
                      } else {
                        sum += (double)-0.0002844690770143643173;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001178355201541721344;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9939320033424431378) ) ) {
            sum += (double)-1.245504239722604866e-06;
          } else {
            sum += (double)0.0001329118388629898292;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.910536871956927538e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002531495307748382368;
        } else {
          sum += (double)-5.642705099506367477e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9711991278023407448) ) ) {
        sum += (double)-3.885297977808045862e-05;
      } else {
        sum += (double)0.0001167651609561982641;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02957065407293220372) ) ) {
        sum += (double)0.0002967814591136716442;
      } else {
        sum += (double)1.521266202497131761e-05;
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3643614687975887945) ) ) {
            sum += (double)-3.052496313860343885e-05;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3902052906590447456) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1130574458800080034) ) ) {
                sum += (double)0.0004156981586393984824;
              } else {
                sum += (double)3.324815533123910667e-05;
              }
            } else {
              sum += (double)5.689810127046384507e-06;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4570570293251041138) ) ) {
            sum += (double)6.483726666774690135e-05;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6470355293276465192) ) ) {
              sum += (double)-2.575073849366435545e-05;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01192174046900940261) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01144422169027970067) ) ) {
                  sum += (double)9.962088833735496839e-06;
                } else {
                  sum += (double)-0.000272040521459920089;
                }
              } else {
                sum += (double)5.297060887788196772e-05;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001166571646866610958;
        } else {
          sum += (double)8.230330883245656185e-07;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
        sum += (double)-0.00011349045140963134;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          sum += (double)0.0001426041425535610563;
        } else {
          sum += (double)-4.102359951621322706e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7719890388971448747) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6700686045374256716) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.560167446845740713) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09284629329452671886) ) ) {
              sum += (double)5.290153025402630948e-05;
            } else {
              sum += (double)0.0002696315793641465498;
            }
          } else {
            sum += (double)-8.428597244450690125e-05;
          }
        } else {
          sum += (double)-6.588076990391571219e-05;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01508468591631305193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5135288428897961666) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.67383329584012408) ) ) {
                sum += (double)-7.616243995726108633e-05;
              } else {
                sum += (double)-0.0003112112342660111435;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2383811426128441269) ) ) {
                sum += (double)9.196834492935781959e-05;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                  sum += (double)-6.709555144576976498e-05;
                } else {
                  sum += (double)-0.0003749931203492451698;
                }
              }
            }
          } else {
            sum += (double)-6.840850980340908384e-06;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.795846249543709305) ) ) {
            sum += (double)-5.099949578388236337e-05;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02317877413482440432) ) ) {
              sum += (double)-3.568171618544325216e-05;
            } else {
              sum += (double)0.0001787657083315384978;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7919955348350430357) ) ) {
        sum += (double)0.0002551822545420792112;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.03347941303341895464) ) ) {
            sum += (double)-0.0002227173687978869392;
          } else {
            sum += (double)0.0001639294586967416907;
          }
        } else {
          sum += (double)-3.952959060629993027e-05;
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09781272638538611452) ) ) {
            sum += (double)-8.055414360783555861e-05;
          } else {
            sum += (double)6.575241428711270605e-06;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4570570293251041138) ) ) {
            sum += (double)6.418889538337572216e-05;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6665311812318160944) ) ) {
              sum += (double)-2.196055218192168062e-05;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02656204255649715143) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9159152517183267728) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02184468199994800408) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01389697382890710091) ) ) {
                      sum += (double)-1.012176929369089398e-05;
                    } else {
                      sum += (double)9.553244551189523075e-05;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7028648223739178968) ) ) {
                      sum += (double)-0.0001716455699852304016;
                    } else {
                      sum += (double)4.142885831242893183e-06;
                    }
                  }
                } else {
                  sum += (double)-0.0001695935026121636407;
                }
              } else {
                sum += (double)0.0001133532149786936437;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001154905923398142904;
        } else {
          sum += (double)8.148050299413395264e-07;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)1.937834650078522426e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002501112005887301602;
        } else {
          sum += (double)-5.539581503200514343e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7719890388971448747) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6700686045374256716) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.560167446845740713) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09284629329452671886) ) ) {
              sum += (double)5.237251598702137242e-05;
            } else {
              sum += (double)0.0002669352652643480219;
            }
          } else {
            sum += (double)-8.344311383968619304e-05;
          }
        } else {
          sum += (double)-6.522196579940750766e-05;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01508468591631305193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5135288428897961666) ) ) {
              sum += (double)-0.0002526947608580702091;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2383811426128441269) ) ) {
                sum += (double)9.104866134813554342e-05;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                  sum += (double)-6.642459332942962777e-05;
                } else {
                  sum += (double)-0.0003712431896322717414;
                }
              }
            }
          } else {
            sum += (double)-6.772442685553070473e-06;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.795846249543709305) ) ) {
            sum += (double)-5.048950092038358644e-05;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02317877413482440432) ) ) {
              sum += (double)-3.532489438598253431e-05;
            } else {
              sum += (double)0.0001769780559292019964;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7919955348350430357) ) ) {
        sum += (double)0.0002526304313505534191;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.03347941303341895464) ) ) {
            sum += (double)-0.0002204901920188041212;
          } else {
            sum += (double)0.0001622901655473681516;
          }
        } else {
          sum += (double)-3.913429386235646093e-05;
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3643614687975887945) ) ) {
            sum += (double)-3.006035980151836593e-05;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3902052906590447456) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1130574458800080034) ) ) {
                sum += (double)0.0004114754279990765146;
              } else {
                sum += (double)3.284992175176739847e-05;
              }
            } else {
              sum += (double)5.567160407136528037e-06;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4498947908842932386) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4275973989307226275) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.25834539873007234) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)3.465051199810287308) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01358228213017845069) ) ) {
                    sum += (double)0.0001824943243720850237;
                  } else {
                    sum += (double)1.462152908061398214e-05;
                  }
                } else {
                  sum += (double)-0.0001216889461433953246;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4424888685894248774) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01549985673365740328) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.402027961129499012) ) ) {
                      sum += (double)5.599697888976175385e-05;
                    } else {
                      sum += (double)-0.0002404206272457604912;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02506279512868545348) ) ) {
                      sum += (double)0.0003333974817942362678;
                    } else {
                      sum += (double)9.018574850806208214e-05;
                    }
                  }
                } else {
                  sum += (double)0.0002261105665216608972;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.108533247771946506) ) ) {
                sum += (double)0.0003280267094988830183;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02310827241320505612) ) ) {
                  sum += (double)0.0001749562976183369949;
                } else {
                  sum += (double)-0.0001955916292499750746;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.69519940445920414) ) ) {
              sum += (double)-1.536451848604927144e-05;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9005884871890521559) ) ) {
                sum += (double)5.898259497104310097e-05;
              } else {
                sum += (double)-4.329883556002406145e-05;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001143356881253897541;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9939320033424431378) ) ) {
            sum += (double)-1.249427535543057694e-06;
          } else {
            sum += (double)0.0001315663447843562375;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
        sum += (double)-0.0001119088444888227836;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          sum += (double)0.0001415795142141481439;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1961081311872297228) ) ) {
              sum += (double)-2.542180910285634146e-05;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2488259315871576283) ) ) {
                sum += (double)-0.000432685826905071741;
              } else {
                sum += (double)-0.0001078417558542073349;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.164258817846220095) ) ) {
              sum += (double)-0.0001448871058066345961;
            } else {
              sum += (double)1.774960850389785608e-05;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      sum += (double)-3.386636385933777148e-05;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.173477760651207902) ) ) {
        sum += (double)1.326895679437345186e-06;
      } else {
        sum += (double)0.0002763885888271033655;
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1969716199204754326) ) ) {
        sum += (double)-1.333522273715734021e-05;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01786796629190690391) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01350718992917560209) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3054218362718867374) ) ) {
                sum += (double)0.0001305105898955801055;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01234409799962950249) ) ) {
                    sum += (double)4.117181845198290672e-06;
                  } else {
                    sum += (double)0.0002638637941951553099;
                  }
                } else {
                  sum += (double)-9.683405902075220854e-05;
                }
              }
            } else {
              sum += (double)-2.850506729065763021e-05;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4595373221702413469) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.536815244488509258) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02184468199994800408) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02151867742099905154) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
                      sum += (double)-1.118629548752515724e-05;
                    } else {
                      sum += (double)0.0001818641503204536814;
                    }
                  } else {
                    sum += (double)0.0003431515923987787215;
                  }
                } else {
                  sum += (double)-1.571699668265734507e-05;
                }
              } else {
                sum += (double)8.741689310817990456e-05;
              }
            } else {
              sum += (double)0.0002491496310436299984;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7926895608503349289) ) ) {
            sum += (double)-9.102748725356576029e-06;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8015490832600030702) ) ) {
              sum += (double)0.000193095567461568844;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.047081057724363218) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5506241236438244036) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1334099412632789583) ) ) {
                    sum += (double)-0.0002158335610292851949;
                  } else {
                    sum += (double)0.0001151123860246217241;
                  }
                } else {
                  sum += (double)-0.0002070144336648171036;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.558918444603463405) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8406289760072206407) ) ) {
                    sum += (double)0.0004451590717127103529;
                  } else {
                    sum += (double)0.0001290159741264963018;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8048720285102878291) ) ) {
                    sum += (double)-0.0002215143701992928994;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.067506404023069955) ) ) {
                      sum += (double)-1.866207873395944804e-05;
                    } else {
                      sum += (double)6.465124823344191426e-05;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      sum += (double)-4.545298164751111921e-05;
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7719890388971448747) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
        sum += (double)2.440836968070999834e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01508468591631305193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
            sum += (double)-0.0001843527859661424427;
          } else {
            sum += (double)-6.366053453853561398e-06;
          }
        } else {
          sum += (double)-3.572500029943343912e-05;
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7919955348350430357) ) ) {
        sum += (double)0.0002503468325044701237;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.03347941303341895464) ) ) {
            sum += (double)-0.0002179633890322986173;
          } else {
            sum += (double)0.0001608493461728442871;
          }
        } else {
          sum += (double)-3.848309692184833844e-05;
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1495216361104711733) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02726246693999815132) ) ) {
            sum += (double)1.448860464035533579e-05;
          } else {
            sum += (double)-0.0002854431343730539413;
          }
        } else {
          sum += (double)-0.0002209885912890285963;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01453835969900455112) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9685277135434785523) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3054218362718867374) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9177423731409749541) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2383811426128441269) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.858972793756756836) ) ) {
                    sum += (double)-3.224077110961638231e-05;
                  } else {
                    sum += (double)0.0002127971092150325008;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01042844819256645225) ) ) {
                      sum += (double)-4.515098803676664656e-05;
                    } else {
                      sum += (double)0.0002797495174713225544;
                    }
                  } else {
                    sum += (double)-0.0001192194863312667465;
                  }
                }
              } else {
                sum += (double)0.0002627256340427516811;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8754380250063158453) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7296813692868641121) ) ) {
                  sum += (double)-1.432754790938033863e-05;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7527246299952811137) ) ) {
                    sum += (double)-0.0003330936729131887299;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)5.870378638489113676) ) ) {
                      sum += (double)-2.156982485238196409e-05;
                    } else {
                      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4595373221702413469) ) ) {
                        sum += (double)-4.45335311087546881e-05;
                      } else {
                        sum += (double)-0.0003463074670060340126;
                      }
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01283086941649215149) ) ) {
                  sum += (double)0.0001916377212153747836;
                } else {
                  sum += (double)-7.712699222163512899e-05;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9863741581003412362) ) ) {
              sum += (double)-0.0003031651352379143342;
            } else {
              sum += (double)3.24831891339272279e-06;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1996668231354973566) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.716810860265206351) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02607008868106795371) ) ) {
                sum += (double)0.0001906100157445863458;
              } else {
                sum += (double)-9.261309227440506545e-05;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
                sum += (double)-0.0001282982201628650681;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9535212656236063955) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7363026282442169945) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1930007800989422817) ) ) {
                      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02573667030828500138) ) ) {
                        sum += (double)4.752630641692319192e-05;
                      } else {
                        sum += (double)-5.514341751066497403e-05;
                      }
                    } else {
                      sum += (double)-0.0001803025081365679748;
                    }
                  } else {
                    sum += (double)-9.862636809653633888e-05;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1082637889236797019) ) ) {
                    sum += (double)0.0003439552829756091002;
                  } else {
                    sum += (double)-5.779446468555501839e-05;
                  }
                }
              }
            }
          } else {
            sum += (double)2.645198894656383901e-05;
          }
        }
      }
    } else {
      sum += (double)-4.49984507246708619e-05;
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02903912287516625598) ) ) {
      sum += (double)-3.424365131886736709e-05;
    } else {
      sum += (double)9.562981861213652116e-05;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          sum += (double)-9.806229925792922202e-06;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4498947908842932386) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4275973989307226275) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.25834539873007234) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)3.465051199810287308) ) ) {
                  sum += (double)3.422795763053983756e-05;
                } else {
                  sum += (double)-0.0001212219678906395134;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4424888685894248774) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01549985673365740328) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.402027961129499012) ) ) {
                      sum += (double)5.43938362433079976e-05;
                    } else {
                      sum += (double)-0.0002389064803719520612;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02506279512868545348) ) ) {
                      sum += (double)0.0003291566576226614494;
                    } else {
                      sum += (double)8.833628308181047737e-05;
                    }
                  }
                } else {
                  sum += (double)0.0002229843431872860623;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.108533247771946506) ) ) {
                sum += (double)0.0003242052012554755996;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02310827241320505612) ) ) {
                  sum += (double)0.0001725929344538599435;
                } else {
                  sum += (double)-0.0001946712769567966554;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.69519940445920414) ) ) {
              sum += (double)-1.538759877751415066e-05;
            } else {
              sum += (double)4.697240097567549784e-05;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001124050783255370339;
        } else {
          sum += (double)6.76279752926124667e-07;
        }
      }
    } else {
      sum += (double)-4.454847001475982022e-05;
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7719890388971448747) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
        sum += (double)2.442521597829863807e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01508468591631305193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5135288428897961666) ) ) {
              sum += (double)-0.0002476431856214601247;
            } else {
              sum += (double)-9.832512716812056176e-05;
            }
          } else {
            sum += (double)-5.959957177195735434e-06;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.757480240018580275) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5239561240717546253) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.472289651438457414) ) ) {
                sum += (double)-4.669012814725778107e-05;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4956051957708774713) ) ) {
                  sum += (double)0.0003126999273620270094;
                } else {
                  sum += (double)1.670297780947294113e-05;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01826725435155895569) ) ) {
                sum += (double)3.165197147823432279e-05;
              } else {
                sum += (double)-0.0001276516374569927105;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.63273555259114167) ) ) {
              sum += (double)2.961528232498538039e-06;
            } else {
              sum += (double)0.0002494540815646557733;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7919955348350430357) ) ) {
        sum += (double)0.0002480775754116217014;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.03347941303341895464) ) ) {
            sum += (double)-0.0002155650023459678485;
          } else {
            sum += (double)0.0001594775824450216475;
          }
        } else {
          sum += (double)-3.782990298051556896e-05;
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2275718159412110364) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3643614687975887945) ) ) {
            sum += (double)-2.943872724949938939e-05;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3902052906590447456) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1130574458800080034) ) ) {
                sum += (double)0.00040739851411093368;
              } else {
                sum += (double)3.280813624151051336e-05;
              }
            } else {
              sum += (double)5.6183932464688172e-06;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4570570293251041138) ) ) {
            sum += (double)6.162324225248211524e-05;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6470355293276465192) ) ) {
              sum += (double)-2.512199129416691902e-05;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01192174046900940261) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01144422169027970067) ) ) {
                  sum += (double)8.887078887553034767e-06;
                } else {
                  sum += (double)-0.0002704666686310831943;
                }
              } else {
                sum += (double)5.08726894100870931e-05;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
          sum += (double)-0.0001112810324312621645;
        } else {
          sum += (double)6.695159409772013892e-07;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)2.098639146092215151e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002456551229241429836;
        } else {
          sum += (double)-5.304210348152661579e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02903912287516625598) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9711991278023407448) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4638534819906688367) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02310827241320505612) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8851213978465052312) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.06733953851966785475) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4696659962677198208) ) ) {
                  sum += (double)-8.508612777487460242e-05;
                } else {
                  sum += (double)0.0001761328798690528475;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02060767615889840323) ) ) {
                  sum += (double)-6.115845583675157755e-05;
                } else {
                  sum += (double)-0.000213848361070605289;
                }
              }
            } else {
              sum += (double)0.0001533714822844712492;
            }
          } else {
            sum += (double)5.608984376816907448e-05;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.950955682132203606) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02780107516205635246) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1223485249935564595) ) ) {
                  sum += (double)9.527626090857665877e-05;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.0156309632167115041) ) ) {
                    sum += (double)-0.0002610326331729690428;
                  } else {
                    sum += (double)-8.980496499405952332e-05;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01904528850581000202) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.570673106758585291) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01382766296952895289) ) ) {
                      sum += (double)-0.0003546970738984999046;
                    } else {
                      sum += (double)8.088932186365128203e-05;
                    }
                  } else {
                    sum += (double)5.27969065711694061e-05;
                  }
                } else {
                  sum += (double)-8.026421015849336655e-05;
                }
              }
            } else {
              sum += (double)-0.0002578903376008383837;
            }
          } else {
            sum += (double)0.0002194827990162940569;
          }
        }
      } else {
        sum += (double)0.0001174349430948495843;
      }
    } else {
      sum += (double)9.470687101547343545e-05;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1495216361104711733) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02726246693999815132) ) ) {
            sum += (double)1.52908238428062755e-05;
          } else {
            sum += (double)-0.000281471909838728598;
          }
        } else {
          sum += (double)-0.0002181003200853916387;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01453835969900455112) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9685277135434785523) ) ) {
            sum += (double)-7.057086819895630079e-06;
          } else {
            sum += (double)-0.0001710621212445635525;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1996668231354973566) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.716810860265206351) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02607008868106795371) ) ) {
                sum += (double)0.0001887613786316976274;
              } else {
                sum += (double)-9.151912247762083476e-05;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
                sum += (double)-0.0001266227835434925752;
              } else {
                sum += (double)-1.224292596094258108e-05;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.007110241827282701328) ) ) {
              sum += (double)0.0001965572854452249201;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.536815244488509258) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3941152036552846849) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.21992160151344603) ) ) {
                      sum += (double)0.0001164868015121779806;
                    } else {
                      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3908071911647953423) ) ) {
                        sum += (double)0.0001557626100257039051;
                      } else {
                        sum += (double)-4.28096849643364266e-05;
                      }
                    }
                  } else {
                    sum += (double)0.0001021381733775716076;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02252608655938285326) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)5.830346509314411563) ) ) {
                      sum += (double)0.0001147837325735318135;
                    } else {
                      sum += (double)-1.802245356588846793e-06;
                    }
                  } else {
                    sum += (double)0.0001109066924430935849;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.0156309632167115041) ) ) {
                  sum += (double)0.0001107412123534684165;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.69519940445920414) ) ) {
                    sum += (double)-1.607728812133198419e-05;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5239561240717546253) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8935404120209198275) ) ) {
                        sum += (double)7.261575581564102579e-05;
                      } else {
                        sum += (double)-6.103510584464256756e-05;
                      }
                    } else {
                      sum += (double)-7.151413331827483445e-06;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
        sum += (double)-0.000109015621519888397;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          sum += (double)0.0001418930527870543279;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1961081311872297228) ) ) {
              sum += (double)-2.343520266899409358e-05;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2488259315871576283) ) ) {
                sum += (double)-0.0004265302929561585153;
              } else {
                sum += (double)-0.0001049156662042218148;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.164258817846220095) ) ) {
              sum += (double)-0.0001415741321305552189;
            } else {
              sum += (double)1.937084361618044166e-05;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      sum += (double)-3.229913541592438134e-05;
    } else {
      sum += (double)0.0001181359256363727871;
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        sum += (double)2.07730221628340739e-05;
      } else {
        sum += (double)-1.962616289774356004e-06;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
        sum += (double)-0.0001079254709960271946;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          sum += (double)0.0001404741323009754293;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1961081311872297228) ) ) {
              sum += (double)-2.320085067857200229e-05;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2488259315871576283) ) ) {
                sum += (double)-0.000422264991095289545;
              } else {
                sum += (double)-0.0001038665131933090406;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.164258817846220095) ) ) {
              sum += (double)-0.0001401583873574429782;
            } else {
              sum += (double)1.917714556812051487e-05;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7719890388971448747) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6700686045374256716) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.560167446845740713) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09284629329452671886) ) ) {
              sum += (double)5.221706465817987729e-05;
            } else {
              sum += (double)0.000264633467155068222;
            }
          } else {
            sum += (double)-8.245331555683931707e-05;
          }
        } else {
          sum += (double)-6.400869346439971494e-05;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01508468591631305193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6632242271807050615) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5135288428897961666) ) ) {
              sum += (double)-0.0002381455171377059395;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2383811426128441269) ) ) {
                sum += (double)9.373316364612297087e-05;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01350718992917560209) ) ) {
                  sum += (double)-7.746464642372707596e-05;
                } else {
                  sum += (double)-0.000359210888749327223;
                }
              }
            }
          } else {
            sum += (double)2.747444448889129669e-06;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.757480240018580275) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5407335778570617757) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4504044487488739201) ) ) {
                sum += (double)-5.141251458540787618e-05;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1789032677275002314) ) ) {
                  sum += (double)0.0002755473295904018556;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.173477760651207902) ) ) {
                    sum += (double)-7.600591070584807008e-05;
                  } else {
                    sum += (double)0.0002578440476208925468;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01826725435155895569) ) ) {
                sum += (double)3.070099791026829504e-05;
              } else {
                sum += (double)-0.0001289321242924389762;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.63273555259114167) ) ) {
              sum += (double)3.47636302259551137e-06;
            } else {
              sum += (double)0.0002472239798542274071;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7919955348350430357) ) ) {
        sum += (double)0.0002460641751127291615;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.03347941303341895464) ) ) {
            sum += (double)-0.0002144120937945055076;
          } else {
            sum += (double)0.0001574961795081752491;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9443784941828451407) ) ) {
            sum += (double)-5.556626526273678718e-05;
          } else {
            sum += (double)0.0001670622074214572555;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
        sum += (double)-6.3378958882781989e-05;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.712227963681067999) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.164258817846220095) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02671196901479900437) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.9558194503025569944) ) ) {
                sum += (double)5.401302873675430853e-05;
              } else {
                sum += (double)-5.376877963557959671e-05;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02771810095998910109) ) ) {
                sum += (double)-0.0002994481706100858022;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02808786248294615345) ) ) {
                  sum += (double)0.000308232157956808792;
                } else {
                  sum += (double)-4.64458167010739701e-05;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7972676792238838628) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.08032266449207001169) ) ) {
                sum += (double)0.000212177215355702426;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1459647687609034739) ) ) {
                  sum += (double)-0.0002150426496071024631;
                } else {
                  sum += (double)5.37581271640919558e-05;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8482026653508364378) ) ) {
                sum += (double)0.0004076502150855958336;
              } else {
                sum += (double)5.866195081183925514e-05;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.221973762165741384) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02894601395829570281) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9159152517183267728) ) ) {
                sum += (double)-6.633666488675789244e-06;
              } else {
                sum += (double)-0.0002339500901491745782;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
                sum += (double)-0.0002622641656575176597;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6385046169172611252) ) ) {
                  sum += (double)-0.0001410029511940333042;
                } else {
                  sum += (double)0.0002186738278154128556;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1895717934159274198) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02671196901479900437) ) ) {
                sum += (double)-7.823101468433074748e-06;
              } else {
                sum += (double)-0.0001078582381978776512;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5157228734565598716) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02252608655938285326) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4951203461998025523) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4609229873828811219) ) ) {
                      sum += (double)4.690320986614382633e-05;
                    } else {
                      sum += (double)0.0003283049877732992098;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2112087366510198849) ) ) {
                      sum += (double)0.0003054352100614620455;
                    } else {
                      sum += (double)-3.106749449572460652e-05;
                    }
                  }
                } else {
                  sum += (double)9.807569600003256257e-05;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8048720285102878291) ) ) {
                  sum += (double)-1.733374121651936012e-05;
                } else {
                  sum += (double)6.170844375626557889e-05;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)2.163105892416622254e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002420425671152770595;
        } else {
          sum += (double)-5.166124451881676683e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      sum += (double)-3.169415720398741554e-05;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.173477760651207902) ) ) {
        sum += (double)-1.532461404079391032e-06;
      } else {
        sum += (double)0.0002698730512444550865;
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
        sum += (double)-6.274516758007824208e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01453835969900455112) ) ) {
          sum += (double)-1.183506039093492117e-05;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1996668231354973566) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.716810860265206351) ) ) {
              sum += (double)0.0001241107327272341146;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
                sum += (double)-0.0001253423423184889512;
              } else {
                sum += (double)-1.203811469189931608e-05;
              }
            }
          } else {
            sum += (double)2.531971847983709368e-05;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
        sum += (double)-0.0001064350103274330208;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
          sum += (double)0.0001394362801753838135;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1961081311872297228) ) ) {
              sum += (double)-2.259884442677363199e-05;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2488259315871576283) ) ) {
                sum += (double)-0.0004175771245500072741;
              } else {
                sum += (double)-0.000102344003109330374;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.164258817846220095) ) ) {
              sum += (double)-0.0001382566502665184328;
            } else {
              sum += (double)1.942094483516186118e-05;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7719890388971448747) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1460811605902708199) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6700686045374256716) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.560167446845740713) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09284629329452671886) ) ) {
              sum += (double)5.200820115215358264e-05;
            } else {
              sum += (double)0.000262214418593479466;
            }
          } else {
            sum += (double)-8.148416404479316537e-05;
          }
        } else {
          sum += (double)-6.309115548252260499e-05;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01508468591631305193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5135288428897961666) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.67383329584012408) ) ) {
                sum += (double)-6.358108967542648116e-05;
              } else {
                sum += (double)-0.0002961236915507470301;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2383811426128441269) ) ) {
                sum += (double)9.31127712205384936e-05;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                  sum += (double)-5.956005733848239041e-05;
                } else {
                  sum += (double)-0.0003586986244772561068;
                }
              }
            }
          } else {
            sum += (double)-5.221622266966585925e-06;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.795846249543709305) ) ) {
            sum += (double)-4.719676844187281021e-05;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02317877413482440432) ) ) {
              sum += (double)-3.426729373595848507e-05;
            } else {
              sum += (double)0.0001753554197074304083;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7919955348350430357) ) ) {
        sum += (double)0.0002438283275230585846;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.03347941303341895464) ) ) {
            sum += (double)-0.0002119653907027982333;
          } else {
            sum += (double)0.0001560873741576404832;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9443784941828451407) ) ) {
            sum += (double)-5.476373700421164437e-05;
          } else {
            sum += (double)0.000165571448689496003;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0119365507008376507) ) ) {
        sum += (double)-0.0001542460207680338314;
      } else {
        sum += (double)2.195442287563522928e-06;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01803149630506025239) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01750510838567600341) ) ) {
          sum += (double)3.174940135795623265e-05;
        } else {
          sum += (double)-0.0001616311222796167144;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01918447453836980357) ) ) {
          sum += (double)0.0002319111125817632031;
        } else {
          sum += (double)7.837304273235364254e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6357722180670989376) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01986770749633720232) ) ) {
          sum += (double)6.452477065977291638e-05;
        } else {
          sum += (double)-0.0001676282570834326552;
        }
      } else {
        sum += (double)-0.0002412393294953483764;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.305522745225109915) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06143668909582125637) ) ) {
          sum += (double)5.314989698233848478e-05;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07462212179840606308) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8172465313453953772) ) ) {
              sum += (double)-0.0003533454791282896411;
            } else {
              sum += (double)8.650397947665465839e-05;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9159152517183267728) ) ) {
              sum += (double)6.227371527595578118e-06;
            } else {
              sum += (double)-4.084944992374146691e-05;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08176741196850571824) ) ) {
            sum += (double)0.0001796727302717044869;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01283086941649215149) ) ) {
                sum += (double)-0.0001503133108033924447;
              } else {
                sum += (double)-0.0003724324796348810348;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02714149005953705313) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6089944401946038033) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02431407355560485581) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01977236547012340209) ) ) {
                      sum += (double)1.377577865410044218e-05;
                    } else {
                      sum += (double)-0.000182552290960955331;
                    }
                  } else {
                    sum += (double)0.0002062056112018498689;
                  }
                } else {
                  sum += (double)-0.000246010035043582305;
                }
              } else {
                sum += (double)-0.0002727596239457207418;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01904528850581000202) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7077201362993573719) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7135238894595133941) ) ) {
                sum += (double)0.0002396809661653465757;
              } else {
                sum += (double)-1.747409366327614937e-05;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9074944717289308294) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5871324530971141487) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01225532007894340226) ) ) {
                    sum += (double)2.154629668579078616e-05;
                  } else {
                    sum += (double)-0.0002142105087315520533;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.256241118377060317) ) ) {
                    sum += (double)-3.843650582712143616e-05;
                  } else {
                    sum += (double)0.0002100481557464527682;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9478673619765488612) ) ) {
                  sum += (double)0.000301449150290517573;
                } else {
                  sum += (double)4.225899264301088721e-05;
                }
              }
            }
          } else {
            sum += (double)-6.252045272433731193e-05;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4916166693607885718) ) ) {
        sum += (double)-5.670475615182152655e-07;
      } else {
        sum += (double)-0.0001511772276932822037;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01453835969900455112) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9685277135434785523) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3054218362718867374) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9177423731409749541) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2383811426128441269) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.858972793756756836) ) ) {
                    sum += (double)-3.193853835449033898e-05;
                  } else {
                    sum += (double)0.0002108476588147736863;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01042844819256645225) ) ) {
                      sum += (double)-4.524402134120464423e-05;
                    } else {
                      sum += (double)0.0002765417134246996272;
                    }
                  } else {
                    sum += (double)-0.000118318910620385603;
                  }
                }
              } else {
                sum += (double)0.000260025328178267864;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8754380250063158453) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7296813692868641121) ) ) {
                  sum += (double)-1.452977301473974091e-05;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7527246299952811137) ) ) {
                    sum += (double)-0.0003295739519914301827;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)6.266642075407699686) ) ) {
                      sum += (double)-2.556874678876262398e-05;
                    } else {
                      sum += (double)-0.0002299788040807470939;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9005884871890521559) ) ) {
                    sum += (double)0.0002975763598712341832;
                  } else {
                    sum += (double)2.013801187276840289e-05;
                  }
                } else {
                  sum += (double)-0.0001135374074801802748;
                }
              }
            }
          } else {
            sum += (double)-0.0001692123965984408749;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1996668231354973566) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.716810860265206351) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02607008868106795371) ) ) {
                sum += (double)0.0001850206130083002494;
              } else {
                sum += (double)-9.149251901544631384e-05;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
                sum += (double)-0.000123903207950689623;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9535212656236063955) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7363026282442169945) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1930007800989422817) ) ) {
                      sum += (double)1.681831239981065136e-05;
                    } else {
                      sum += (double)-0.000178804987622748358;
                    }
                  } else {
                    sum += (double)-9.723127785561037797e-05;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1082637889236797019) ) ) {
                    sum += (double)0.0003409646490278343215;
                  } else {
                    sum += (double)-5.681475162938502899e-05;
                  }
                }
              }
            }
          } else {
            sum += (double)2.494097867186569051e-05;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9405523751155687728) ) ) {
          sum += (double)-0.0001085528700631195061;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
            sum += (double)0.0001678409087016125652;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.307951927067082909) ) ) {
              sum += (double)-0.0001314679472303321962;
            } else {
              sum += (double)4.761234558487711025e-06;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02903912287516625598) ) ) {
      sum += (double)-3.186271810301764964e-05;
    } else {
      sum += (double)9.242467021044249058e-05;
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0119365507008376507) ) ) {
        sum += (double)-0.0001521713249875526741;
      } else {
        sum += (double)2.154277765781598789e-06;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01803149630506025239) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6694314152454112765) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01638543023599910511) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4159728223559160942) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.287024031720624961) ) ) {
                sum += (double)-7.755823081676313147e-06;
              } else {
                sum += (double)-0.0002928217071374612378;
              }
            } else {
              sum += (double)8.928001660894116368e-05;
            }
          } else {
            sum += (double)-0.0001708140056499966462;
          }
        } else {
          sum += (double)8.564416714711115637e-05;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01918447453836980357) ) ) {
          sum += (double)0.0002293921451257797766;
        } else {
          sum += (double)7.741023295045811005e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6357722180670989376) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01986770749633720232) ) ) {
          sum += (double)6.534423044286086875e-05;
        } else {
          sum += (double)-0.0001645287874784758951;
        }
      } else {
        sum += (double)-0.0002373792553082742693;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.305522745225109915) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06143668909582125637) ) ) {
          sum += (double)5.23884104208238732e-05;
        } else {
          sum += (double)-3.827408965441794806e-06;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08176741196850571824) ) ) {
            sum += (double)0.0001781324876938015296;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01283086941649215149) ) ) {
                sum += (double)-0.0001484915507151871017;
              } else {
                sum += (double)-0.000368389532463077264;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02714149005953705313) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6089944401946038033) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02431407355560485581) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01977236547012340209) ) ) {
                      sum += (double)1.393560897903861845e-05;
                    } else {
                      sum += (double)-0.0001804081387877559575;
                    }
                  } else {
                    sum += (double)0.0002044621893120082982;
                  }
                } else {
                  sum += (double)-0.0002432313102084056777;
                }
              } else {
                sum += (double)-0.0002699321874928090016;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01904528850581000202) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7077201362993573719) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7135238894595133941) ) ) {
                sum += (double)0.0002375983385345301589;
              } else {
                sum += (double)-1.70430735852278321e-05;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9074944717289308294) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5871324530971141487) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01225532007894340226) ) ) {
                    sum += (double)2.164945933215606694e-05;
                  } else {
                    sum += (double)-0.0002117759962207996043;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.256241118377060317) ) ) {
                    sum += (double)-3.775205055717379072e-05;
                  } else {
                    sum += (double)0.0002082662967750952769;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9478673619765488612) ) ) {
                  sum += (double)0.0002987532827648378751;
                } else {
                  sum += (double)4.214670884803953688e-05;
                }
              }
            }
          } else {
            sum += (double)-6.166689109439696284e-05;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0119365507008376507) ) ) {
        sum += (double)-0.0001506496126469420891;
      } else {
        sum += (double)2.132735237814039484e-06;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01803149630506025239) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01750510838567600341) ) ) {
          sum += (double)3.133929537778550999e-05;
        } else {
          sum += (double)-0.0001594113714963896222;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01918447453836980357) ) ) {
          sum += (double)0.000227098230423186621;
        } else {
          sum += (double)7.663612991092697588e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6357722180670989376) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01986770749633720232) ) ) {
          sum += (double)6.469078940426697629e-05;
        } else {
          sum += (double)-0.0001628835054169244909;
        }
      } else {
        sum += (double)-0.0002350054638450370771;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.305522745225109915) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7926895608503349289) ) ) {
            sum += (double)-7.197356071895419179e-06;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8015490832600030702) ) ) {
              sum += (double)0.00019607528054092977;
            } else {
              sum += (double)2.714593396250392166e-05;
            }
          }
        } else {
          sum += (double)-3.362780424446562235e-05;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08176741196850571824) ) ) {
            sum += (double)0.0001763511680765077552;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01283086941649215149) ) ) {
                sum += (double)-0.0001470066317533318936;
              } else {
                sum += (double)-0.0003647056373986689464;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02714149005953705313) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6089944401946038033) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02431407355560485581) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01977236547012340209) ) ) {
                      sum += (double)1.379625065493639014e-05;
                    } else {
                      sum += (double)-0.0001786040636197401316;
                    }
                  } else {
                    sum += (double)0.0002024175594984130235;
                  }
                } else {
                  sum += (double)-0.0002407989978382829696;
                }
              } else {
                sum += (double)-0.0002672328751894735782;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01904528850581000202) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7077201362993573719) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7135238894595133941) ) ) {
                sum += (double)0.0002352223534566851633;
              } else {
                sum += (double)-1.687264538521135825e-05;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9074944717289308294) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5871324530971141487) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01225532007894340226) ) ) {
                    sum += (double)2.143296851919820515e-05;
                  } else {
                    sum += (double)-0.0002096582335205032452;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.256241118377060317) ) ) {
                    sum += (double)-3.737453001667745677e-05;
                  } else {
                    sum += (double)0.0002061836345631989714;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9478673619765488612) ) ) {
                  sum += (double)0.0002957657502875441955;
                } else {
                  sum += (double)4.172524125103584954e-05;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.757480240018580275) ) ) {
              sum += (double)-8.11965621393259733e-05;
            } else {
              sum += (double)5.706264541539199234e-05;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0119365507008376507) ) ) {
        sum += (double)-0.0001491431177495733753;
      } else {
        sum += (double)2.111407348818229797e-06;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01803149630506025239) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6694314152454112765) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01638543023599910511) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4159728223559160942) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.287024031720624961) ) ) {
                sum += (double)-7.991657859863752309e-06;
              } else {
                sum += (double)-0.0002902068846881212562;
              }
            } else {
              sum += (double)8.807382265956181875e-05;
            }
          } else {
            sum += (double)-0.0001687834188730145751;
          }
        } else {
          sum += (double)8.462693109642713122e-05;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01918447453836980357) ) ) {
          sum += (double)0.000224827243626921189;
        } else {
          sum += (double)7.586976912347270265e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6357722180670989376) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01986770749633720232) ) ) {
          sum += (double)6.404387928341748952e-05;
        } else {
          sum += (double)-0.0001612546719501123849;
        }
      } else {
        sum += (double)-0.0002326554089705360536;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.305522745225109915) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06143668909582125637) ) ) {
          sum += (double)5.185388799011220716e-05;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07462212179840606308) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8172465313453953772) ) ) {
              sum += (double)-0.0003499498739697491168;
            } else {
              sum += (double)8.490848937071859782e-05;
            }
          } else {
            sum += (double)-1.412106467909371242e-06;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08176741196850571824) ) ) {
            sum += (double)0.0001745876505156047627;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
              sum += (double)-0.0002487442908074024802;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02714149005953705313) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6089944401946038033) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02431407355560485581) ) ) {
                    sum += (double)-6.621887081212574555e-05;
                  } else {
                    sum += (double)0.000200393384915183891;
                  }
                } else {
                  sum += (double)-0.0002383910043863579642;
                }
              } else {
                sum += (double)-0.0002645605390951518213;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01904528850581000202) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7077201362993573719) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7135238894595133941) ) ) {
                sum += (double)0.0002328701306265802836;
              } else {
                sum += (double)-1.670392006330768546e-05;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9074944717289308294) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5871324530971141487) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01225532007894340226) ) ) {
                    sum += (double)2.121863215087125e-05;
                  } else {
                    sum += (double)-0.0002075616518447462441;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.256241118377060317) ) ) {
                    sum += (double)-3.700078849215060505e-05;
                  } else {
                    sum += (double)0.0002041217957382961438;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9478673619765488612) ) ) {
                  sum += (double)0.0002928080946384441414;
                } else {
                  sum += (double)4.13079860366203581e-05;
                }
              }
            }
          } else {
            sum += (double)-6.043971824339158951e-05;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1789032677275002314) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1872407614875158111) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.866016488865893663) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)6.381037791594297737) ) ) {
              sum += (double)-0.0001061694690488458446;
            } else {
              sum += (double)5.977073641067060097e-05;
            }
          } else {
            sum += (double)-0.0002583019839870315639;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.7625998463431417074) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5139380427591212497) ) ) {
              sum += (double)2.301024170733536844e-05;
            } else {
              sum += (double)0.000304506921181173023;
            }
          } else {
            sum += (double)-1.006684791149576982e-05;
          }
        }
      } else {
        sum += (double)1.391695841385687349e-05;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01803149630506025239) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6694314152454112765) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01638543023599910511) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4159728223559160942) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.287024031720624961) ) ) {
                sum += (double)-7.911738890044866734e-06;
              } else {
                sum += (double)-0.0002873048112572481184;
              }
            } else {
              sum += (double)8.719308471874050355e-05;
            }
          } else {
            sum += (double)-0.0001670955954007998423;
          }
        } else {
          sum += (double)8.378066398203373039e-05;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01918447453836980357) ) ) {
          sum += (double)0.0002225789697110360746;
        } else {
          sum += (double)7.511107111320003827e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6357722180670989376) ) ) {
        sum += (double)-5.149881834354760337e-05;
      } else {
        sum += (double)-0.0002303288502747470351;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.305522745225109915) ) ) {
        sum += (double)-6.715615375141333849e-08;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08176741196850571824) ) ) {
            sum += (double)0.0001728417754638939929;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
              sum += (double)-0.0002462568498728141407;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02714149005953705313) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6089944401946038033) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02431407355560485581) ) ) {
                    sum += (double)-6.555668468917569768e-05;
                  } else {
                    sum += (double)0.0001983894560147415529;
                  }
                } else {
                  sum += (double)-0.0002360070972645189678;
                }
              } else {
                sum += (double)-0.0002619149331604280796;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01904528850581000202) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7077201362993573719) ) ) {
              sum += (double)0.0001440640222948180455;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9074944717289308294) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5871324530971141487) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01225532007894340226) ) ) {
                    sum += (double)2.100644897347172773e-05;
                  } else {
                    sum += (double)-0.0002054860334968767446;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.256241118377060317) ) ) {
                    sum += (double)-3.663077426608652066e-05;
                  } else {
                    sum += (double)0.000202080583567881318;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9478673619765488612) ) ) {
                  sum += (double)0.0002898800126942140706;
                } else {
                  sum += (double)4.089491373055021908e-05;
                }
              }
            }
          } else {
            sum += (double)-5.983532177789518768e-05;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1495216361104711733) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02726246693999815132) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7801871300499175765) ) ) {
          sum += (double)3.873316108379143028e-05;
        } else {
          sum += (double)-0.0001716489739145242433;
        }
      } else {
        sum += (double)-0.0002570778056344186387;
      }
    } else {
      sum += (double)-0.0002217643505427986455;
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.712227963681067999) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.164258817846220095) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5817276913846098907) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1255540588702710181) ) ) {
            sum += (double)0.0002667155744022334566;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02642353843585500475) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01192174046900940261) ) ) {
                  sum += (double)4.313450739053743311e-05;
                } else {
                  sum += (double)-0.0002627605234156362574;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3508400122960292911) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2509859594834532581) ) ) {
                    sum += (double)0.0003653867406082218186;
                  } else {
                    sum += (double)0.0001158760574420931012;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4702326615575453395) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02092420655291860401) ) ) {
                      sum += (double)-0.0002327463794007109457;
                    } else {
                      sum += (double)5.232581440196089253e-05;
                    }
                  } else {
                    sum += (double)0.0001783191494563224789;
                  }
                }
              }
            } else {
              sum += (double)-0.0001122526389395540246;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9005884871890521559) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2682805900681782263) ) ) {
              sum += (double)-8.599682523410267262e-05;
            } else {
              sum += (double)1.834092431868897526e-05;
            }
          } else {
            sum += (double)-0.0001396523097177921951;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7972676792238838628) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.08032266449207001169) ) ) {
            sum += (double)0.0002103188632860441057;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1459647687609034739) ) ) {
              sum += (double)-0.0002124154990395674602;
            } else {
              sum += (double)5.252345068574364672e-05;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8482026653508364378) ) ) {
            sum += (double)0.0004026192961027845463;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.35564070535936021) ) ) {
              sum += (double)0.000301045401599900472;
            } else {
              sum += (double)-7.391218363525386026e-05;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9939320033424431378) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.753219679353367422) ) ) {
          sum += (double)-0.0001958636111994565025;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9898977054350229787) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.087122256782787844) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3700672663534202989) ) ) {
                  sum += (double)-6.405834830323037898e-07;
                } else {
                  sum += (double)6.429313711748589296e-05;
                }
              } else {
                sum += (double)-1.093951799671973797e-05;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6922241028961023668) ) ) {
                  sum += (double)-6.878452176267786026e-05;
                } else {
                  sum += (double)1.02058910755236975e-05;
                }
              } else {
                sum += (double)0.0002568670939999046269;
              }
            }
          } else {
            sum += (double)-0.0002060990065576569035;
          }
        }
      } else {
        sum += (double)0.000144750241086252844;
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.338290159917210786) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9235225761896096452) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5042524459296521266) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3283578793189833589) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1613658750355028149) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1068344241124927624) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                sum += (double)7.96653858851641448e-05;
              } else {
                sum += (double)-0.0001690585622478515547;
              }
            } else {
              sum += (double)-8.955458609392303468e-06;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.25834539873007234) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06143668909582125637) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0182047754436659541) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.007110241827282701328) ) ) {
                    sum += (double)0.0001378014270216226561;
                  } else {
                    sum += (double)-0.0001807138876109901494;
                  }
                } else {
                  sum += (double)0.0001380927944182638704;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06885587736567781725) ) ) {
                  sum += (double)-0.0004059867707662677037;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)3.988276128802482834) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6056519017882310285) ) ) {
                      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4570570293251041138) ) ) {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)3.627597656116023028) ) ) {
                          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3520588799652250578) ) ) {
                            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5817276913846098907) ) ) {
                              sum += (double)0.0001865925283937468258;
                            } else {
                              sum += (double)-6.123735206942497477e-05;
                            }
                          } else {
                            sum += (double)0.00011075168963859086;
                          }
                        } else {
                          sum += (double)-0.0002823009674186603484;
                        }
                      } else {
                        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)2.621823482583064635) ) ) {
                          sum += (double)-0.0001895191920897448259;
                        } else {
                          sum += (double)2.98075095295559558e-05;
                        }
                      }
                    } else {
                      sum += (double)5.179288990942381527e-05;
                    }
                  } else {
                    sum += (double)-0.0002430383030973051208;
                  }
                }
              }
            } else {
              sum += (double)4.327054116738815465e-05;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.753219679353367422) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1000294091092987087) ) ) {
              sum += (double)0.0005101571940550847332;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7339523180692114623) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.558918444603463405) ) ) {
                  sum += (double)-1.217041249986047377e-05;
                } else {
                  sum += (double)0.000257421058890328785;
                }
              } else {
                sum += (double)0.0002378128197150337583;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)2.166465998065226994) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4020144315435040805) ) ) {
                sum += (double)3.65143878540645015e-05;
              } else {
                sum += (double)-0.0003179985877165260539;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)2.680782105389812209) ) ) {
                sum += (double)0.0001660078722621123636;
              } else {
                sum += (double)2.448085464702994771e-05;
              }
            }
          }
        }
      } else {
        sum += (double)-2.544825971503285431e-06;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
        sum += (double)2.331845506892672739e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01646079497748045503) ) ) {
          sum += (double)-0.0002371118465797170279;
        } else {
          sum += (double)-4.936081628032049936e-05;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
      sum += (double)-2.949676852717638708e-05;
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02957065407293220372) ) ) {
        sum += (double)0.0002863629038135210615;
      } else {
        sum += (double)9.035057497813421396e-06;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4916166693607885718) ) ) {
      sum += (double)-1.101668752633723704e-06;
    } else {
      sum += (double)-0.0001432006199832324344;
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.712227963681067999) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.164258817846220095) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5817276913846098907) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1255540588702710181) ) ) {
            sum += (double)0.0002636826986302989576;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02642353843585500475) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01312514207045350177) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01192174046900940261) ) ) {
                  sum += (double)4.239452379156968218e-05;
                } else {
                  sum += (double)-0.0002602351607347373058;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3508400122960292911) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2509859594834532581) ) ) {
                    sum += (double)0.0003611049130963890847;
                  } else {
                    sum += (double)0.00011473855421316234;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4702326615575453395) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02092420655291860401) ) ) {
                      sum += (double)-0.0002303046505272877953;
                    } else {
                      sum += (double)5.149863524399357753e-05;
                    }
                  } else {
                    sum += (double)0.0001763734739314018409;
                  }
                }
              }
            } else {
              sum += (double)-0.0001112031562731698864;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8048720285102878291) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7566669332934963244) ) ) {
              sum += (double)-1.727232669366582967e-05;
            } else {
              sum += (double)0.0002290332315764813398;
            }
          } else {
            sum += (double)-0.0001112422728172252621;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7972676792238838628) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.08032266449207001169) ) ) {
            sum += (double)0.0002073761403814635622;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1459647687609034739) ) ) {
              sum += (double)-0.0002104829928766076264;
            } else {
              sum += (double)5.185205466436507306e-05;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8482026653508364378) ) ) {
            sum += (double)0.0003978957300007875727;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.35564070535936021) ) ) {
              sum += (double)0.0002976478718156958122;
            } else {
              sum += (double)-7.315156723749130356e-05;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9939320033424431378) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.753219679353367422) ) ) {
          sum += (double)-0.0001938752913556527485;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9898977054350229787) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02934426448091500064) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.087122256782787844) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02894601395829570281) ) ) {
                  sum += (double)1.484136436490565209e-06;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.741768915774867033) ) ) {
                    sum += (double)-0.0002298434887995460336;
                  } else {
                    sum += (double)-1.377114201948808603e-05;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6922241028961023668) ) ) {
                  sum += (double)-6.780170917283780097e-05;
                } else {
                  sum += (double)1.039880149384266531e-05;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.115043771396290212) ) ) {
                sum += (double)0.0004146727026355537336;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)2.505322665155627515) ) ) {
                  sum += (double)-0.0002489796536829089928;
                } else {
                  sum += (double)5.102142104474099505e-05;
                }
              }
            }
          } else {
            sum += (double)-0.000203980465509718482;
          }
        }
      } else {
        sum += (double)0.0001434005013787620104;
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0119365507008376507) ) ) {
        sum += (double)-0.0001466711798045588209;
      } else {
        sum += (double)2.035959581638191353e-06;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01803149630506025239) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6694314152454112765) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01638543023599910511) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4159728223559160942) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)7.287024031720624961) ) ) {
                sum += (double)-8.528113038219671007e-06;
              } else {
                sum += (double)-0.0002840247967036529909;
              }
            } else {
              sum += (double)8.568960604379358549e-05;
            }
          } else {
            sum += (double)-0.0001658575535717924851;
          }
        } else {
          sum += (double)8.252862918190658728e-05;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01918447453836980357) ) ) {
          sum += (double)0.0002195906667860553555;
        } else {
          sum += (double)7.375062756538533634e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6357722180670989376) ) ) {
        sum += (double)-4.835704393564921127e-05;
      } else {
        sum += (double)-0.00022530091091732871;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.305522745225109915) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01365999260533240153) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8754380250063158453) ) ) {
            sum += (double)-5.688584299996914871e-05;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9005884871890521559) ) ) {
              sum += (double)0.0002945923575933909752;
            } else {
              sum += (double)-2.202653759929666276e-06;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.0157239833133220562) ) ) {
            sum += (double)6.005456167872825205e-05;
          } else {
            sum += (double)-1.91759083920058077e-06;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08176741196850571824) ) ) {
            sum += (double)0.0001716468756203539639;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
              sum += (double)-0.000242947605700874822;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02714149005953705313) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6089944401946038033) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02431407355560485581) ) ) {
                    sum += (double)-6.408079900348218842e-05;
                  } else {
                    sum += (double)0.000197211461014706993;
                  }
                } else {
                  sum += (double)-0.0002327904161029437124;
                }
              } else {
                sum += (double)-0.0002592990802781236113;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01904528850581000202) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7077201362993573719) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7135238894595133941) ) ) {
                sum += (double)0.0002301484965331231363;
              } else {
                sum += (double)-1.792567472875816815e-05;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9074944717289308294) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5871324530971141487) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01225532007894340226) ) ) {
                    sum += (double)2.191935585310253036e-05;
                  } else {
                    sum += (double)-0.0002023416325503673706;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.256241118377060317) ) ) {
                    sum += (double)-3.581413169740699421e-05;
                  } else {
                    sum += (double)0.0002008473195676361439;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9478673619765488612) ) ) {
                  sum += (double)0.000287116160283663424;
                } else {
                  sum += (double)4.139195661991834776e-05;
                }
              }
            }
          } else {
            sum += (double)-5.862479473115465075e-05;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.4685228121721578542) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3817462315019383157) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.1789032677275002314) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1872407614875158111) ) ) {
          sum += (double)-8.259481005408290943e-05;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.7625998463431417074) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5139380427591212497) ) ) {
              sum += (double)2.075757058760659357e-05;
            } else {
              sum += (double)0.0003002279180729987783;
            }
          } else {
            sum += (double)-9.972086768786265172e-06;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02151867742099905154) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.2717323376608271057) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01242832762838365183) ) ) {
              sum += (double)0.0001711769188335954608;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.913312821284922971) ) ) {
                sum += (double)-3.421832901053474866e-05;
              } else {
                sum += (double)0.0002577175676872554659;
              }
            }
          } else {
            sum += (double)-4.161282607094850987e-05;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.221973762165741384) ) ) {
            sum += (double)-9.465408384468311772e-06;
          } else {
            sum += (double)7.68453888667193838e-05;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01803149630506025239) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01750510838567600341) ) ) {
          sum += (double)2.982141454104390824e-05;
        } else {
          sum += (double)-0.0001559856546093494787;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01918447453836980357) ) ) {
          sum += (double)0.000217394759175458947;
        } else {
          sum += (double)7.301312278925288697e-05;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1907884147973593347) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6357722180670989376) ) ) {
        sum += (double)-4.787347544510284393e-05;
      } else {
        sum += (double)-0.0002230478975515654135;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)8.305522745225109915) ) ) {
        sum += (double)-1.296290720419345882e-07;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6315960249404614091) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08176741196850571824) ) ) {
            sum += (double)0.0001699304063513409164;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01515817162962235232) ) ) {
              sum += (double)-0.0002405181306112610408;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02714149005953705313) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6089944401946038033) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.02431407355560485581) ) ) {
                    sum += (double)-6.343999189094349893e-05;
                  } else {
                    sum += (double)0.0001952393488450483803;
                  }
                } else {
                  sum += (double)-0.0002304625102109033284;
                }
              } else {
                sum += (double)-0.0002567060823522268088;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01904528850581000202) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7077201362993573719) ) ) {
              sum += (double)0.000141889310304274351;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9074944717289308294) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5871324530971141487) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.01225532007894340226) ) ) {
                    sum += (double)2.170016174204647555e-05;
                  } else {
                    sum += (double)-0.0002003182122806230407;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.256241118377060317) ) ) {
                    sum += (double)-3.545599547214805749e-05;
                  } else {
                    sum += (double)0.0001988388508963849098;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9478673619765488612) ) ) {
                  sum += (double)0.0002842450017730395332;
                } else {
                  sum += (double)4.097803485241126022e-05;
                }
              }
            }
          } else {
            sum += (double)-5.803854689552931303e-05;
          }
        }
      }
    }
  }

  sum = sum + (double)(0);
  if (!pred_margin) {
    return pred_transform(sum);
  } else {
    return sum;
  }
}
